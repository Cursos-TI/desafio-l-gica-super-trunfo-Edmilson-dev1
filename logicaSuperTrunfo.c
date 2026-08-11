#include <stdio.h>

int main() {
    // ---------- Carta 1 ----------
    char estado1[3] = "SP";
    char codigo1[4] = "A01";
    char cidade1[50] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.0;
    float pib1 = 700000000000.0; // em reais
    int pontosTuristicos1 = 15; // pontos turísticos da carta 1


    // ---------- Carta 2 ----------
    char estado2[3] = "RJ";
    char codigo2[4] = "B01";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.0;
    float pib2 = 300000000000.0;
    int pontosTuristicos2 = 8;  // pontos turísticos da carta 2

    // ---------- Calculos derivados ----------
    // Densidade populacional = populacao / area
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // PIB per capita = pib / populacao
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibe os dados calculados de cada carta
    printf("Carta 1 - %s (%s)\n", cidade1, estado1);
    printf("Populacao: %d | Area: %.2f km2\n", populacao1, area1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2 | PIB per capita: %.2f\n\n", densidade1, pibPerCapita1);

    printf("Carta 2 - %s (%s)\n", cidade2, estado2);
    printf("Populacao: %d | Area: %.2f km2\n", populacao2, area2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2 | PIB per capita: %.2f\n\n", densidade2, pibPerCapita2);

    // ---------- Comparacao ----------
    // Atributo escolhido no codigo: Populacao
    // Regra: maior valor vence (excecao seria Densidade Populacional, onde vence o menor)
    printf("Comparacao de cartas (Atributo: Populacao):\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
