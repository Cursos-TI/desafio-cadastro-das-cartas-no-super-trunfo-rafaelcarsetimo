#include <stdio.h> // biblioteca pra entrada e saida de dados

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
    scanf("%s", cod1);
    printf("Digite a populacao: ");
    scanf("%lu", &pop1);
    printf("Digite a area em km2: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos1);

    // === Pegando informacao da segunda cidade ===
    printf("\nDigite o codigo da segunda cidade (ex: B02): ");
    scanf("%s", cod2);
    printf("Digite a populacao: ");
    scanf("%lu", &pop2);
    printf("Digite a area em km2: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos2);

    // === Calculo dos atributos adicionais ===
    dens1 = pop1 / area1; // calcula a densidade populacional (populacao dividida pela area)
    dens2 = pop2 / area2; // calcula a densidade populacional da outra cidade

    pibPer1 = pib1 / pop1; // calcula o PIB per capita (riqueza dividida pelo numero de pessoas)
    pibPer2 = pib2 / pop2; // calcula o PIB per capita da segunda cidade

    // === Calculo do Super Poder ===
    poder1 = pop1 + pib1 + pontos1 + (1 / dens1); // soma os atributos e inverte a densidade
    poder2 = pop2 + pib2 + pontos2 + (1 / dens2); // soma os atributos e inverte a densidade

    // === Mostrando quem venceu ===
    printf("\n=== Resultado da Comparacao ===\n");

    // Comparando a populacao das cidades
    printf("Populacao: ");
    if (pop1 > pop2) {
        printf("Carta 1 venceu - Cidade: %s\n", cod1);
    } else if (pop2 > pop1) {
        printf("Carta 2 venceu - Cidade: %s\n", cod2);
    } else {
        printf("Empate! Ambas tem a mesma populacao\n");
    }

    // Comparando a area das cidades
    printf("Area: ");
    if (area1 > area2) {
        printf("Carta 1 venceu - Cidade: %s\n", cod1);
    } else if (area2 > area1) {
        printf("Carta 2 venceu - Cidade: %s\n", cod2);
    } else {
        printf("Empate! Ambas tem a mesma area\n");
    }

    // Comparando o PIB das cidades
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 venceu - Cidade: %s\n", cod1);
    } else if (pib2 > pib1) {
        printf("Carta 2 venceu - Cidade: %s\n", cod2);
    } else {
        printf("Empate! Ambas tem o mesmo PIB\n");
    }

    // Comparando pontos turisticos
    printf("Pontos Turisticos: ");
    if (pontos1 > pontos2) {
        printf("Carta 1 venceu - Cidade: %s\n", cod1);
    } else if (pontos2 > pontos1) {
        printf("Carta 2 venceu - Cidade: %s\n", cod2);
    } else {
        printf("Empate! Ambas tem a mesma qtde de pontos turisticos\n");
    }

    // Comparando a densidade populacional (menor valor vence)
    printf("Densidade Populacional: ");
    if (dens1 < dens2) {
        printf("Carta 1 venceu - Cidade: %s\n", cod1);
    } else if (dens2 < dens1) {
        printf("Carta 2 venceu - Cidade: %s\n", cod2);
    } else {
        printf("Empate! Ambas tem a mesma densidade\n");
    }

    // Comparando o Super Poder
    printf("Super Poder: ");
    if (poder1 > poder2) {
        printf("Carta 1 venceu - Cidade: %s\n", cod1);
    } else if (poder2 > poder1) {
        printf("Carta 2 venceu - Cidade: %s\n", cod2);
    } else {
        printf("Empate! Ambas tem o mesmo super poder\n");
    }

    return 0; // finaliza o programa
}
