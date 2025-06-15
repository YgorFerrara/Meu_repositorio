#include <stdio.h>

int main() {
    char estado[3], codigo[50], cidade[50], estado2[3], codigo2[50], cidade2[50];
    int pt, pt2;
    float pib, pib2, densidade, densidade2, area, area2;
    float pib_per_capita, pib_per_capita2, super_poder, super_poder2;
    unsigned long int populacao, populacao2;

    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    // Entrada de dados da carta 1
    printf("CARTA 1\n");
    printf("Digite a sigla do seu estado: ");
    scanf("%2s", estado);
    printf("Digite o codigo da sua carta: ");
    scanf("%s", codigo);
    printf("Digite o nome da sua cidade: ");
    scanf("%s", cidade);
    printf("Digite a populacao total da sua cidade: ");
    scanf("%lu", &populacao);
    printf("Digite a area total da sua cidade em km2: ");
    scanf("%f", &area);
    printf("Digite o PIB total da sua cidade: ");
    scanf("%f", &pib);
    printf("Digite o numero total de pontos turisticos da sua cidade: ");
    scanf("%d", &pt);

    densidade = populacao / area;
    pib_per_capita = pib / populacao;
    super_poder = (float)populacao + area + pib + (float)pt + pib_per_capita + (1.0 / densidade);

    // Entrada de dados da carta 2
    printf("\nCARTA 2\n");
    printf("Digite a sigla do seu estado: ");
    scanf("%2s", estado2);
    printf("Digite o codigo da sua carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da sua cidade: ");
    scanf("%s", cidade2);
    printf("Digite a populacao total da sua cidade: ");
    scanf("%lu", &populacao2);
    printf("Digite a area total da sua cidade em km2: ");
    scanf("%f", &area2);
    printf("Digite o PIB total da sua cidade: ");
    scanf("%f", &pib2);
    printf("Digite o numero total de pontos turisticos da sua cidade: ");
    scanf("%d", &pt2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pt2 + pib_per_capita2 + (1.0 / densidade2);

    // Exibicao das cartas
    printf("\n=========== CARTA 1 ===========\n");
    printf("Cidade: %s (%s)\n", cidade, estado);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %lu\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("PIB per capita: %.2f\n", pib_per_capita);
    printf("Pontos turisticos: %d\n", pt);
    printf("Densidade populacional: %.2f hab/km2\n", densidade);
    printf("Super Poder: %.2f\n", super_poder);

    printf("\n=========== CARTA 2 ===========\n");
    printf("Cidade: %s (%s)\n", cidade2, estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Pontos turisticos: %d\n", pt2);
    printf("Densidade populacional: %.2f hab/km2\n", densidade2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Menu interativo - primeira escolha
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - PIB per capita\n");
    printf("5 - Pontos turisticos\n");
    printf("6 - Densidade populacional (MENOR vence)\n");
    printf("7 - Super Poder\n");
    printf("Digite o numero do atributo: ");
    scanf("%d", &atributo1);

    // Menu interativo - segunda escolha
    do {
        printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
        for (int i = 1; i <= 7; i++) {
            if (i != atributo1) {
                switch(i) {
                    case 1: printf("1 - Populacao\n"); break;
                    case 2: printf("2 - Area\n"); break;
                    case 3: printf("3 - PIB\n"); break;
                    case 4: printf("4 - PIB per capita\n"); break;
                    case 5: printf("5 - Pontos turisticos\n"); break;
                    case 6: printf("6 - Densidade populacional (MENOR vence)\n"); break;
                    case 7: printf("7 - Super Poder\n"); break;
                }
            }
        }
        printf("Digite o numero do segundo atributo: ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1) printf("Atributo repetido. Escolha outro.\n");
    } while (atributo2 == atributo1);

    // Funcao para obter valor de um atributo
    float get_valor(int opcao, int carta) {
        switch (opcao) {
            case 1: return carta == 1 ? populacao : populacao2;
            case 2: return carta == 1 ? area : area2;
            case 3: return carta == 1 ? pib : pib2;
            case 4: return carta == 1 ? pib_per_capita : pib_per_capita2;
            case 5: return carta == 1 ? pt : pt2;
            case 6: return carta == 1 ? densidade : densidade2;
            case 7: return carta == 1 ? super_poder : super_poder2;
            default: return 0;
        }
    }

    valor1_carta1 = get_valor(atributo1, 1);
    valor1_carta2 = get_valor(atributo1, 2);
    valor2_carta1 = get_valor(atributo2, 1);
    valor2_carta2 = get_valor(atributo2, 2);

    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\n===== RESULTADO DA COMPARACAO =====\n");
    printf("Atributo 1: valor carta 1 = %.2f | valor carta 2 = %.2f\n", valor1_carta1, valor1_carta2);
    printf("Atributo 2: valor carta 1 = %.2f | valor carta 2 = %.2f\n", valor2_carta1, valor2_carta2);
    printf("Soma carta 1: %.2f\n", soma1);
    printf("Soma carta 2: %.2f\n", soma2);

    if (soma1 > soma2)
        printf("Resultado: Carta 1 venceu!\n");
    else if (soma2 > soma1)
        printf("Resultado: Carta 2 venceu!\n");
    else
        printf("Resultado: Empate!\n");

    return 0;
}
