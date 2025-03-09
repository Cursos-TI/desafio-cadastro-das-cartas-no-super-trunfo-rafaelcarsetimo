#include <stdio.h> // biblioteca pra entrada e saida de dados

int main() {
    // Variaveis para guardar os dados das cartas
    char nome1[50], nome2[50]; // nome do pais
    unsigned long int pop1, pop2; // populacao
    float area1, area2; // tamanho em km2
    float pib1, pib2; // dinheiro total do pais
    int pontos1, pontos2; // numero de pontos turisticos
    float dens1, dens2; // densidade populacional (populacao / area)
    int op1, op2; // opcoes de atributos escolhidas pelo usuario
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2, soma1, soma2;

    // === Pegando informacao da primeira carta ===
    printf("Digite o nome do primeiro pais: ");
    scanf(" %[^\n]", nome1);
    printf("Digite a populacao: ");
    scanf("%lu", &pop1);
    printf("Digite a area em km2: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // === Pegando informacao da segunda carta ===
    printf("\nDigite o nome do segundo pais: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a populacao: ");
    scanf("%lu", &pop2);
    printf("Digite a area em km2: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // === Calculando a densidade populacional ===
    dens1 = pop1 / area1;
    dens2 = pop2 / area2;

    // === Menu para escolha do primeiro atributo ===
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade populacional\n");
    printf("Digite sua opcao: ");
    scanf("%d", &op1);

    // === Menu para escolha do segundo atributo (sem repetir o primeiro) ===
    printf("\nEscolha o segundo atributo para comparar (nao pode repetir o primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != op1) { // Mostra apenas opcoes diferentes da primeira escolha
            printf("%d - %s\n", i, (i == 1) ? "Populacao" :
                                  (i == 2) ? "Area" :
                                  (i == 3) ? "PIB" :
                                  (i == 4) ? "Numero de pontos turisticos" :
                                             "Densidade populacional");
        }
    }
    printf("Digite sua opcao: ");
    scanf("%d", &op2);

    // === Comparacao dos dois atributos ===
    printf("\n=== Comparacao entre %s e %s ===\n", nome1, nome2);

    // Primeira comparacao
    switch(op1) {
        case 1:
            printf("Atributo 1: Populacao\n");
            valor1_carta1 = pop1;
            valor1_carta2 = pop2;
            break;
        case 2:
            printf("Atributo 1: Area\n");
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            break;
        case 3:
            printf("Atributo 1: PIB\n");
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            break;
        case 4:
            printf("Atributo 1: Numero de pontos turisticos\n");
            valor1_carta1 = pontos1;
            valor1_carta2 = pontos2;
            break;
        case 5:
            printf("Atributo 1: Densidade populacional\n");
            valor1_carta1 = dens1;
            valor1_carta2 = dens2;
            break;
    }

    // Segunda comparacao
    switch(op2) {
        case 1:
            printf("Atributo 2: Populacao\n");
            valor2_carta1 = pop1;
            valor2_carta2 = pop2;
            break;
        case 2:
            printf("Atributo 2: Area\n");
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            break;
        case 3:
            printf("Atributo 2: PIB\n");
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            break;
        case 4:
            printf("Atributo 2: Numero de pontos turisticos\n");
            valor2_carta1 = pontos1;
            valor2_carta2 = pontos2;
            break;
        case 5:
            printf("Atributo 2: Densidade populacional\n");
            valor2_carta1 = dens1;
            valor2_carta2 = dens2;
            break;
    }

    // Mostra os valores das cartas
    printf("%s - Atributo 1: %.2f, Atributo 2: %.2f\n", nome1, valor1_carta1, valor2_carta1);
    printf("%s - Atributo 1: %.2f, Atributo 2: %.2f\n", nome2, valor1_carta2, valor2_carta2);

    // Invertendo a densidade populacional
    if (op1 == 5) valor1_carta1 = 1 / dens1, valor1_carta2 = 1 / dens2;
    if (op2 == 5) valor2_carta1 = 1 / dens1, valor2_carta2 = 1 / dens2;

    // Soma os atributos
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // Exibe a soma total de cada carta
    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n", nome2, soma2);

    // Define o vencedor
    printf("\nResultado final:\n");
    (soma1 > soma2) ? printf("Vencedor: %s\n", nome1) :
    (soma2 > soma1) ? printf("Vencedor: %s\n", nome2) :
                      printf("Empate!\n");

    return 0; // finaliza o programa
}


