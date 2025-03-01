#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Variaveis para guardar os dados das cidades
    char cod1[4], cod2[4]; // codigo da cidade
    unsigned long int pop1, pop2; // populacao da cidade
    int pontos1, pontos2; // numero de pontos turisticos
    float area1, area2; // tamanho da cidade em km2
    float pib1, pib2; // riqueza da cidade em bilhoes
    float dens1, dens2; // densidade populacional (populacao / area)
    float pibPer1, pibPer2; // PIB per capita (PIB / populacao)
    float poder1, poder2; // calculo do super poder

    // === Pegando informacao da primeira cidade ===
    printf("Digite o codigo da primeira cidade (ex: A01): ");
    scanf("%s", cod1); // pega o codigo da cidade
    printf("Digite a populacao: ");
    scanf("%lu", &pop1); // pega a populacao
    printf("Digite a area em km2: ");
    scanf("%f", &area1); // pega a area
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1); // pega o PIB
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos1); // pega os pontos turisticos

    // === Pegando informacao da segunda cidade ===
    printf("\nDigite o codigo da segunda cidade (ex: B02): ");
    scanf("%s", cod2); // pega o codigo da cidade
    printf("Digite a populacao: ");
    scanf("%lu", &pop2); // pega a populacao
    printf("Digite a area em km2: ");
    scanf("%f", &area2); // pega a area
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2); // pega o PIB
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos2); // pega os pontos turisticos

    // === Calculo dos atributos adicionais ===
    dens1 = pop1 / area1; // calcula a densidade populacional (populacao dividida pela area)
    dens2 = pop2 / area2; // calcula a densidade populacional da outa cidade

    pibPer1 = pib1 / pop1; // calcula o PIB per capita (riqueza dividida pelo numero de pessoas)
    pibPer2 = pib2 / pop2; // calcula o PIB per capita da segunda cidade

    // === Calculo do Super Poder ===
    poder1 = pop1 + pib1 + pontos1 + (1 / dens1); // soma os atributos e inverte a densidade
    poder2 = pop2 + pib2 + pontos2 + (1 / dens2); // soma os atributos e inverte a densidade

    // === Mostrando quem venceu ===
    // Exibe um cabecalho informativo antes de mostrar os resultados das comparacoes
    printf("\n=== Resultado da Comparacao ===\n");

    // Compara as populacoes das duas cidades
    // Se pop1 for maior que pop2, a cidade 1 vence e mostra "Carta 1 venceu - Cidade: cod1"
    // Se pop2 for maior, a cidade 2 vence e mostra "Carta 2 venceu - Cidade: cod2"
    printf("Populacao: Carta %d venceu - Cidade: %s\n",
           (pop1 > pop2) ? 1 : 2,  // Define a carta vencedora
           (pop1 > pop2) ? cod1 : cod2); // Exibe o codigo da cidade vencedora

    // Compara as areas das duas cidades
    // A cidade com a maior area vence
    printf("Area: Carta %d venceu - Cidade: %s\n",
           (area1 > area2) ? 1 : 2,  // Define a carta vencedora
           (area1 > area2) ? cod1 : cod2); // Exibe o codigo da cidade vencedora

    // Compara os PIBs das duas cidades
    // O maior PIB significa mais riqueza, entao a cidade com PIB maior vence
    printf("PIB: Carta %d venceu - Cidade: %s\n",
           (pib1 > pib2) ? 1 : 2,  // Define a carta vencedora
           (pib1 > pib2) ? cod1 : cod2); // Exibe o codigo da cidade vencedora

    // Compara o numero de pontos turisticos das duas cidades
    // A cidade com mais atracoes turisticas vence
    printf("Pontos Turistics: Carta %d venceu - Cidade: %s\n",
           (pontos1 > pontos2) ? 1 : 2,  // Define a carta vencedora
           (pontos1 > pontos2) ? cod1 : cod2); // Exibe o codigo da cidade vencedora

    // Compara a densidade populacional das duas cidades
    // A cidade com menor densidade populacional vence (menos pessoas por km significa mais espaco)
    printf("Densidade Populacionaal: Carta %d venceu - Cidade: %s\n",
           (dens1 < dens2) ? 1 : 2,  // Define a carta vencedora (menor densidade e melhor)
           (dens1 < dens2) ? cod1 : cod2); // Exibe o codigo da cidade vencedora

    // Compara o "Super Poder" das duas cidades
    // O Super Poder e uma soma de atrributos, invertendo a densidade populacional (1/densidade)
    // A cidade com o maior Super Poder vence
    printf("Super Poder: Carta %d venceu - Cidade : %s\n",
           (poder1 > poder2) ? 1 : 2,  // Define a carta vencedora
           (poder1 > poder2) ? cod1 : cod2); // Exibe o codigo da cidade vencedora

    return 0; // finaliza o programa
}
