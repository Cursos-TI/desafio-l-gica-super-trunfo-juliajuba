#include <stdio.h>
#include <string.h>

int main() {
    // Carta número 1
    char estado, codigo[4], nome[20];
    int populacao;
    float area, pib, densidade, per_capita, super_poder;
    int pontos_turisticos;

    // Carta número 2
    char estado1, codigo1[4], nome1[20];
    int populacao1;
    float area1, pib1, densidade1, per_capita1, super_poder1;
    int pontos_turisticos1;

    // Entrada de dados para a Carta 1
    printf("Digite o estado da primeira cidade: \n");
    scanf(" %c", &estado);
    printf("Digite o codigo da primeira cidade: \n");
    scanf("%s", codigo);
    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", nome);
    printf("Digite a populacao da primeira cidade: \n");
    scanf("%d", &populacao);
    printf("Digite a area da primeira cidade: \n");
    scanf("%f", &area);
    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos da primeira cidade: \n");
    scanf("%d", &pontos_turisticos);

    // Cálculos para a Carta 1
    densidade = populacao / area;
    per_capita = pib / populacao;
    super_poder = populacao + area + pib + pontos_turisticos + per_capita + (1 / densidade);

    // Entrada de dados para a Carta 2
    printf("Digite o estado da segunda cidade: \n");
    scanf(" %c", &estado1);
    printf("Digite o codigo da segunda cidade: \n");
    scanf("%s", codigo1);
    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", nome1);
    printf("Digite a populacao da segunda cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a area da segunda cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos da segunda cidade: \n");
    scanf("%d", &pontos_turisticos1);

    // Cálculos para a Carta 2
    densidade1 = populacao1 / area1;
    per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + per_capita1 + (1 / densidade1);

    // Menu interativo para escolha dos atributos
    int opcao1, opcao2;
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Renda per capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &opcao1);

    // Menu dinâmico para o segundo atributo
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    for (int i = 1; i <= 7; i++) {
        if (i != opcao1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Número de pontos turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
                case 6: printf("6 - Renda per capita\n"); break;
                case 7: printf("7 - Super Poder\n"); break;
            }
        }
    }
    scanf("%d", &opcao2);

    // Variáveis para armazenar os valores comparados
    float valor1_attr1 = 0, valor2_attr1 = 0;
    float valor1_attr2 = 0, valor2_attr2 = 0;
    char atributo1[30], atributo2[30];

    // Lógica para o primeiro atributo
    switch (opcao1) {
        case 1:
            valor1_attr1 = populacao;
            valor2_attr1 = populacao1;
            strcpy(atributo1, "População");
            break;
        case 2:
            valor1_attr1 = area;
            valor2_attr1 = area1;
            strcpy(atributo1, "Área");
            break;
        case 3:
            valor1_attr1 = pib;
            valor2_attr1 = pib1;
            strcpy(atributo1, "PIB");
            break;
        case 4:
            valor1_attr1 = pontos_turisticos;
            valor2_attr1 = pontos_turisticos1;
            strcpy(atributo1, "Número de pontos turísticos");
            break;
        case 5:
            valor1_attr1 = densidade;
            valor2_attr1 = densidade1;
            strcpy(atributo1, "Densidade Demográfica");
            break;
        case 6:
            valor1_attr1 = per_capita;
            valor2_attr1 = per_capita1;
            strcpy(atributo1, "Renda per capita");
            break;
        case 7:
            valor1_attr1 = super_poder;
            valor2_attr1 = super_poder1;
            strcpy(atributo1, "Super Poder");
            break;
    }

    // Lógica para o segundo atributo
    switch (opcao2) {
        case 1:
            valor1_attr2 = populacao;
            valor2_attr2 = populacao1;
            strcpy(atributo2, "População");
            break;
        case 2:
            valor1_attr2 = area;
            valor2_attr2 = area1;
            strcpy(atributo2, "Área");
            break;
        case 3:
            valor1_attr2 = pib;
            valor2_attr2 = pib1;
            strcpy(atributo2, "PIB");
            break;
        case 4:
            valor1_attr2 = pontos_turisticos;
            valor2_attr2 = pontos_turisticos1;
            strcpy(atributo2, "Número de pontos turísticos");
            break;
        case 5:
            valor1_attr2 = densidade;
            valor2_attr2 = densidade1;
            strcpy(atributo2, "Densidade Demográfica");
            break;
        case 6:
            valor1_attr2 = per_capita;
            valor2_attr2 = per_capita1;
            strcpy(atributo2, "Renda per capita");
            break;
        case 7:
            valor1_attr2 = super_poder;
            valor2_attr2 = super_poder1;
            strcpy(atributo2, "Super Poder");
            break;
    }

    // Determinação do vencedor para cada atributo
    int carta1_vence_attr1 = (opcao1 == 5) ? (valor1_attr1 < valor2_attr1) : (valor1_attr1 > valor2_attr1);
    int carta1_vence_attr2 = (opcao2 == 5) ? (valor1_attr2 < valor2_attr2) : (valor1_attr2 > valor2_attr2);

    // Soma dos valores dos atributos
    float soma_carta1 = valor1_attr1 + valor1_attr2;
    float soma_carta2 = valor2_attr1 + valor2_attr2;

    // Determinação do vencedor geral
    int carta1_vence_geral = (soma_carta1 > soma_carta2);

    // Exibição do resultado
    printf("\nComparação de cartas:\n");
    printf("Atributo 1: %s\n", atributo1);
    printf("Carta 1 - %s (%c): %.2f\n", nome, estado, valor1_attr1);
    printf("Carta 2 - %s (%c): %.2f\n", nome1, estado1, valor2_attr1);

    printf("\nAtributo 2: %s\n", atributo2);
    printf("Carta 1 - %s (%c): %.2f\n", nome, estado, valor1_attr2);
    printf("Carta 2 - %s (%c): %.2f\n", nome1, estado1, valor2_attr2);

    printf("\nSoma dos atributos:\n");
    printf("Carta 1 - %s (%c): %.2f\n", nome, estado, soma_carta1);
    printf("Carta 2 - %s (%c): %.2f\n", nome1, estado1, soma_carta2);

    if (soma_carta1 == soma_carta2) {
        printf("\nResultado: Empate!\n");
    } else if (carta1_vence_geral) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nome);
    } else {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nome1);
    }

    return 0;
}