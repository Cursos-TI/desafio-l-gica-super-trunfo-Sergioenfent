#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Carta 1 
    char estado1[] = "AL";
    char codigo1[] = "A01";
    char cidade1[] = "Maceio";
    int populacao1 = 1020000;
    float area1 = 511.0;
    float pib1 = 23.5;
    int pontos_turisticos1 = 15;
    
    // Carta 2 
    char estado2[] = "BA";
    char codigo2[] = "B01";
    char cidade2[] = "Salvador";
    int populacao2 = 2887000;
    float area2 = 693.0;
    float pib2 = 63.0;
    int pontos_turisticos2 = 30;
       
    printf("Digite o estado da carta 1: ");
    scanf("%2s", estado1);

    printf("Digite o codigo da carta 1: ");
    scanf("%3s", codigo1);

    printf("Digite a cidade da carta 1: ");
    scanf("%39s", cidade1);

    printf("Digite a populacao da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a area da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos da carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados da Carta 2
    printf("Digite o estado da carta 2: ");
    scanf("%2s", estado2);

    printf("Digite o codigo da carta 2: ");
    scanf("%3s", codigo2);

    printf("Digite a cidade da carta 2: ");
    scanf("%39s", cidade2);

    printf("Digite a populacao da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Mostrando os dados (para confirmar que foram armazenados)
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}
    printf("\n=== Comparação das Cartas ===\n");

    if (populacao1 > populacao2) {
        printf("Cidade 1 (%s - %s) vence em população!\n", cidade1, estado1);
    } else if (populacao2 > populacao1) {
        printf("Cidade 2 (%s - %s) vence em população!\n", cidade2, estado2);
    } else {
        printf("As duas cidades têm a mesma população.\n");
    }

    if (area1 > area2) {
        printf("Cidade 1 (%s - %s) vence em área!\n", cidade1, estado1);
    } else if (area2 > area1) {
        printf("Cidade 2 (%s - %s) vence em área!\n", cidade2, estado2);
    } else {
        printf("As duas cidades têm a mesma área.\n");
    }

    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 (%s) tem mais pontos turisticos (%d) que Carta 2 (%s) (%d).\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Carta 2 (%s) tem mais pontos turisticos (%d) que Carta 1 (%s) (%d).\n", cidade2, pontosTuristicos2, cidade1, pontosTuristicos1);
    } else {
        printf("As duas cartas possuem a mesma quantidade de pontos turisticos: %d.\n", pontosTuristicos1);
    }

    if (pib1 > pib2) {
        printf("Carta 1 (%s) tem maior PIB (%.2f bi) que Carta 2 (%s) (%.2f bi).\n", cidade1, pib1, cidade2, pib2);
    } else if (pib2 > pib1) {
        printf("Carta 2 (%s) tem maior PIB (%.2f bi) que Carta 1 (%s) (%.2f bi).\n", cidade2, pib2, cidade1, pib1);
    } else {
        printf("As duas cartas possuem o mesmo PIB: %.2f bi.\n", pib1);
    }

    return 0;
}
