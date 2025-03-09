#include <stdio.h> // biblioteca pra entrada e saida de dados

int main() {
    // Variaveis para guardar os dados das cartas
    char nome1[50], nome2[50]; // nome do pais
    unsigned long int pop1, pop2; // populacao
    float area1, area2; // tamanho em km2
    float pib1, pib2; // dinheiro total do pais
    int pontos1, pontos2; // numero de pontos turisticos
    float dens1, dens2; // densidade populacional (populacao / area)
    int opcao; // opcao escolhida pelo usuario

    // === Pegando informacao da primeira carta ===
    // Pede nome do primeiro pais
    printf("Digite o nome do primeiro pais: ");
    scanf(" %[^\n]", nome1); 

    // Pede a populacao do pais
    printf("Digite a populacao: ");
    scanf("%lu", &pop1);

    // Pede a area total do pais
    printf("Digite a area em km2: ");
    scanf("%f", &area1);

    // Pede o PIB do pais
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    // Pede numero de pontos turisticos
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // === Pegando informacao da segunda carta ===
    // Pede nome do segundo pais
    printf("\nDigite o nome do segundo pais: ");
    scanf(" %[^\n]", nome2);

    // Pede a populacao do pais
    printf("Digite a populacao: ");
    scanf("%lu", &pop2);

    // Pede a area total do pais
    printf("Digite a area em km2: ");
    scanf("%f", &area2);

    // Pede o PIB do pais
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    // Pede numero de pontos turisticos
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // === Calculando a densidade populacional ===
    // Divide a populacao pela area para calcular a densidade
    dens1 = pop1 / area1;
    dens2 = pop2 / area2;

    // === Menu para escolha do atributo ===
    // Mostra opcoes para usuario escolher qual comparar
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade populacional\n");

    // Captura a escolha do usuario
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    // === Comparacao com switch ===
    // Mostra os paises sendo comparados
    printf("\n=== Comparacao entre %s e %s ===\n", nome1, nome2);

    switch(opcao) {
        case 1: // Populacao
            // Mostra o atributo escolhido
            printf("Atributo: Populacao\n");

            // Mostra o valor da populacao dos dois paises
            printf("%s: %lu habitantes\n", nome1, pop1);
            printf("%s: %lu habitantes\n", nome2, pop2);

            // Verifica quem tem maior populacao
            if (pop1 > pop2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pop2 > pop1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Area
            // Mostra o atributo escolhido
            printf("Atributo: Area\n");

            // Mostra o tamanho dos paises
            printf("%s: %.2f km2\n", nome1, area1);
            printf("%s: %.2f km2\n", nome2, area2);

            // Verifica quem tem maior area
            if (area1 > area2) {
                printf("Vencedor: %s\n", nome1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            // Mostra o atributo escolhido
            printf("Atributo: PIB\n");

            // Mostra o valor do PIB dos paises
            printf("%s: %.2f bilhoes\n", nome1, pib1);
            printf("%s: %.2f bilhoes\n", nome2, pib2);

            // Verifica quem tem maior PIB
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turisticos
            // Mostra o atributo escolhido
            printf("Atributo: Numero de pontos turisticos\n");

            // Mostra o numero de pontos turisticos de cada pais
            printf("%s: %d pontos turisticos\n", nome1, pontos1);
            printf("%s: %d pontos turisticos\n", nome2, pontos2);

            // Verifica quem tem mais pontos turisticos
            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pontos2 > pontos1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade populacional (menor vence)
            // Mostra o atributo escolhido
            printf("Atributo: Densidade populacional\n");

            // Mostra os valores da densidade populacional
            printf("%s: %.2f habitantes por km2\n", nome1, dens1);
            printf("%s: %.2f habitantes por km2\n", nome2, dens2);

            // Verifica quem tem menor densidade populacional
            if (dens1 < dens2) {
                printf("Vencedor: %s\n", nome1);
            } else if (dens2 < dens1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        default: // Caso o usuario escolha uma opcao invalida
            printf("Opcao invalida! Escolha um numero entre 1 e 5.\n");
            break;
    }

    return 0; // finaliza o programa
}
