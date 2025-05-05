#include <stdio.h>

int main() {
    // Carta 1 - Estado de São Paulo
    char estado1[10] = "SP";
    char codigo1[10] = "SP1";
    char nome_cidade1[50] = "São Paulo";
    int populacao1 = 12325232; // População estimada de São Paulo
    float area1 = 1521.11; // Área em km²
    float pib1 = 700.0; // PIB em bilhões de reais
    int pontos_turisticos1 = 50; // Número de pontos turísticos
    float densidade1, pib_per_capita1;

    // Carta 2 - Estado do Rio de Janeiro
    char estado2[10] = "RJ";
    char codigo2[10] = "RJ1";
    char nome_cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000; // População estimada do Rio de Janeiro
    float area2 = 1182.3; // Área em km²
    float pib2 = 300.0; // PIB em bilhões de reais
    int pontos_turisticos2 = 30; // Número de pontos turísticos
    float densidade2, pib_per_capita2;

    // Calculando densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibindo cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.6f bilhões/hab\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.6f bilhões/hab\n", pib_per_capita2);

    // Comparação - atributo escolhido: População
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d\n", nome_cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nome_cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}