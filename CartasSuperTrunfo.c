#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1;
    char codigo1[5];
    char nomeCidade1[50];
    unsigned long populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float SuperPoder1;

    // Declaração de variáveis para a Carta 2
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    unsigned long populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float SuperPoder2;

    // --- CADASTRO DA CARTA 1 ---
    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    SuperPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + densidadePopulacional1;

    printf("\n");

    // --- CADASTRO DA CARTA 2 ---
    printf("=== CADASTRO DA CARTA 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    SuperPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + densidadePopulacional2;

    printf("\n-----------------------------------\n\n");

    // --- EXIBIÇÃO DOS DADOS DA CARTA 1 ---
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais por habitante\n", pibPerCapita1);
    printf("Super Poder da Carta 1: %.2f\n", SuperPoder1);
    printf("\n");

    // --- EXIBIÇÃO DOS DADOS DA CARTA 2 ---
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais por habitante\n", pibPerCapita2);
    printf("Super Poder da Carta 2: %.2f\n", SuperPoder2);
    printf("\n");

    // --- COMPARAÇÃO DAS CARTAS ---
    printf("\n=== COMPARAÇÃO DAS CARTAS ===\n \n");
    printf("Comparação de Cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %lu\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", nomeCidade2, populacao2);

    int opcao;

    // 2. Menu Interativo
    printf("=======================================\n");
    printf("      SUPER TRUNFO - COMPARACAO        \n");
    printf("=======================================\n");
    printf("Escolha o atributo para comparacao:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("=======================================\n");
    printf("Digite a sua opcao (1-5): ");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO DA COMPARACAO ---\n");
    printf("Carta 1: %s\n", nomeCidade1);
    printf("Carta 2: %s\n\n", nomeCidade2);

    // 3. Lógica de Comparação com switch e estruturas aninhadas
    switch (opcao) {
        case 1:
            printf("Atributo Escolhido: Populacao\n");
            printf("%s: %lu habitantes\n", nomeCidade1, populacao1);
            printf("%s: %lu habitantes\n", nomeCidade2, populacao2);
            
            // Regra Geral: Maior valor vence
            if (populacao1 > populacao2) {
                printf("Vencedor: %s!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo Escolhido: Area\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n", nomeCidade2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo Escolhido: PIB\n");
            printf("%s: %.2f bilhoes\n", nomeCidade1, pib1);
            printf("%s: %.2f bilhoes\n", nomeCidade2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo Escolhido: Pontos Turisticos\n");
            printf("%s: %d pontos turisticos\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos turisticos\n", nomeCidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo Escolhido: Densidade Demografica\n");
            printf("%s: %.2f hab/km²\n", nomeCidade1, densidadePopulacional1);
            printf("%s: %.2f hab/km²\n", nomeCidade2, densidadePopulacional2);

            // Regra Especial: Menor valor vence
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("Vencedor: %s! (Menor densidade demografica)\n", nomeCidade1);
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("Vencedor: %s! (Menor densidade demografica)\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Por favor, execute o programa novamente e escolha de 1 a 5.\n");
            break;
    }

    
}