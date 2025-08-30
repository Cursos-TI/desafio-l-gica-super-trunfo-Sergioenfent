#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

// Função para calcular densidade demográfica
float calcularDensidade(int populacao, float area) {
    return area != 0 ? (float)populacao / area : 0;
}

// Função para obter valor de atributo escolhido
float obterValor(int atributo, int populacao, float area, float pib, int pontos, float densidade) {
    switch(atributo) {
        case 1: return populacao;
        case 2: return area;
        case 3: return pib;
        case 4: return pontos;
        case 5: return densidade;
        default: return 0;
    }
}

// Função para imprimir nome do atributo
void nomeAtributo(int atributo) {
    switch(atributo) {
        case 1: printf("Populacao"); break;
        case 2: printf("Area"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turisticos"); break;
        case 5: printf("Densidade Demografica"); break;
        default: printf("Atributo Desconhecido");
    }
}

int main() {
    // Dados das cartas (podem vir do cadastro anterior)
    char pais1[40] = "PaisA";
    int populacao1 = 5000000;
    float area1 = 1000.0;
    float pib1 = 50.0;
    int pontos_turisticos1 = 10;

    char pais2[40] = "PaisB";
    int populacao2 = 7000000;
    float area2 = 1200.0;
    float pib2 = 60.0;
    int pontos_turisticos2 = 12;

    // Calculando densidade demográfica
    float densidade1 = calcularDensidade(populacao1, area1);
    float densidade2 = calcularDensidade(populacao2, area2);

    int atributo1, atributo2;

    // Menu para escolher o primeiro atributo
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    if(atributo1 < 1 || atributo1 > 5) {
        printf("Opcao invalida!\n");
        return 1;
    }

    // Menu para escolher o segundo atributo (dinâmico: não permite repetir o primeiro)
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    for(int i = 1; i <= 5; i++) {
        if(i != atributo1) {
            printf("%d - ", i);
            nomeAtributo(i);
            printf("\n");
        }
    }
    printf("Opcao: ");
    scanf("%d", &atributo2);

    if(atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("Opcao invalida!\n");
        return 1;
    }

    // Obtendo valores dos atributos escolhidos para cada carta
    float valor1_atr1 = obterValor(atributo1, populacao1, area1, pib1, pontos_turisticos1, densidade1);
    float valor1_atr2 = obterValor(atributo2, populacao1, area1, pib1, pontos_turisticos1, densidade1);
    float valor2_atr1 = obterValor(atributo1, populacao2, area2, pib2, pontos_turisticos2, densidade2);
    float valor2_atr2 = obterValor(atributo2, populacao2, area2, pib2, pontos_turisticos2, densidade2);

    // Comparação individual usando regras (densidade: menor vence)
    int pontos1 = 0, pontos2 = 0;

    // Atributo 1
    if(atributo1 == 5) { // densidade: menor vence
        pontos1 += valor1_atr1 < valor2_atr1 ? 1 : 0;
        pontos2 += valor2_atr1 < valor1_atr1 ? 1 : 0;
    } else {
        pontos1 += valor1_atr1 > valor2_atr1 ? 1 : 0;
        pontos2 += valor2_atr1 > valor1_atr1 ? 1 : 0;
    }

    // Atributo 2
    if(atributo2 == 5) { // densidade: menor vence
        pontos1 += valor1_atr2 < valor2_atr2 ? 1 : 0;
        pontos2 += valor2_atr2 < valor1_atr2 ? 1 : 0;
    } else {
        pontos1 += valor1_atr2 > valor2_atr2 ? 1 : 0;
        pontos2 += valor2_atr2 > valor1_atr2 ? 1 : 0;
    }

    // Soma dos atributos para exibição
    float soma1 = valor1_atr1 + valor1_atr2;
    float soma2 = valor2_atr1 + valor2_atr2;

    // Exibição do resultado
    printf("\n=== RESULTADO DA COMPARACAO ===\n");
    printf("%s vs %s\n\n", pais1, pais2);

    printf("Atributo 1: ");
    nomeAtributo(atributo1);
    printf("\n%s: %.2f\n%s: %.2f\n\n", pais1, valor1_atr1, pais2, valor2_atr1);

    printf("Atributo 2: ");
    nomeAtributo(atributo2);
    printf("\n%s: %.2f\n%s: %.2f\n\n", pais1, valor1_atr2, pais2, valor2_atr2);

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n%s: %.2f\n\n", pais1, soma1, pais2, soma2);

    // Determinando vencedor final
    if(pontos1 > pontos2) {
        printf("Vencedor: %s!\n", pais1);
    } else if(pontos2 > pontos1) {
        printf("Vencedor: %s!\n", pais2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
