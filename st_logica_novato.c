#include <stdio.h>
#include <string.h>

int main() {

    // ===================================================
    // DECLARAÇÃO DE VARIÁVEIS - CARTA 01 E CARTA 02
    // ===================================================

    char estado1;               // Caractere (A a H) para identificar o Estado da cidade 01
    char codigo1[4];            // Array de caracteres para o código da carta (ex: "A01")
    char nome_cidade1[50];      // Array de caracteres para o nome da cidade 01
    int populacao1;             // Inteiro para a população da cidade 01
    float area1;                // Float para a área da cidade 01
    float pib1;                 // Float para o PIB da cidade 01
    int pontos_turisticos1;     // Inteiro para o número de pontos turísticos da cidade 01
    float densidade1;           // Float para a densidade populacional da cidade 01
    float pib_per_capita1;      // Float para o PIB per capita da cidade 01

    char estado2;               // Caractere (A a H) para identificar o Estado da cidade 02
    char codigo2[4];            // Array de caracteres para o código da carta (ex: "B02")
    char nome_cidade2[50];      // Array de caracteres para o nome da cidade 02
    int populacao2;             // Inteiro para a população da cidade 02
    float area2;                // Float para a área da cidade 02
    float pib2;                 // Float para o PIB da cidade 02
    int pontos_turisticos2;     // Inteiro para o número de pontos turísticos da cidade 02
    float densidade2;           // Float para a densidade populacional da cidade 02
    float pib_per_capita2;      // Float para o PIB per capita da cidade 02

    char temp_buffer[100];      // Buffer temporário para limpar o '\n' restante das leituras



    // ======================================================
    // ATRIBUIÇÃO DE VALORES FIXOS (PRÉ-DEFINIÇÃO DAS CARTAS)
    // ======================================================
    // CARTA 01: Exemplo - Castanhal, Pará

    estado1 = 'A'; // Exemplo: 'A' para Pará
    strcpy(codigo1, "A01"); // Copia a string "A01" para a variável
    strcpy(nome_cidade1, "Castanhal"); // Copia o nome da cidade 
    populacao1 = 200000; // Populacao em numero int
    area1 = 1250.50; // Área em km²
    pib1 = 3.5; // PIB em bilhões
    pontos_turisticos1 = 15; // Número de pontos turísticos

    //CARTA 02: Exemplo - Camaçari, Bahia

    estado2 = 'B'; // Exemplo: 'B' para Bahia
    strcpy(codigo2, "B02"); // Copia a string "B02" para a variável
    strcpy(nome_cidade2, "Camacari"); // Copia o nome da cidade 
    populacao2 = 150000; // Populacao em numero int
    area2 = 2450.70; // Área em km²
    pib2 = 68.6; // PIB em bilhões
    pontos_turisticos2 = 21; // Número de pontos turísticos


    // ======================================================
    // CÁLCULOS DE DENSIDADE E PIB PER CAPITA
    // ======================================================
    // CARTA 01
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / ((float)populacao1);

    // CARTA 02
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / ((float)populacao2);


    // ========================================================
    // LÓGICA DE COMPARAÇÃO - PONTOS TURÍSTICOS
    // ========================================================
    // Foi escolhido 'Número de Pontos Turísticos' para a comparação
    // Regra: A carta com o MAIOR valor vence

    printf("\n");
    printf("╔════════════════════════════════════════╗\n");
    printf("║         Comparacao das Cartas          ║\n");
    printf("╚════════════════════════════════════════╝\n");

    printf("Atributo de comparacao: Pontos Turisticos\n");
    printf("Carta 1 (%s): %d pontos\n", nome_cidade1, pontos_turisticos1); // Exibe o valor da Carta 01
    printf("Carta 2 (%s): %d pontos\n", nome_cidade2, pontos_turisticos2); // Exibe o valor da Carta 02

    if (pontos_turisticos1 > pontos_turisticos2) { 
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    } else if (pontos_turisticos2 > pontos_turisticos1) { 
        printf("Resultado: Carta 2(%s) venceu!\n", nome_cidade2);
    } else {
        printf("Resultado: Empate! As cartas tem o mesmo numero de pontos turisticos.\n");
    }

    // ========================================================
    // EXIBIÇÃO DOS DADOS COMPLETOS DAS CARTAS
    // ========================================================

    // Exibição dos Dados da Carta 01
    printf("\nSeguem abaixo os dados da Carta 01:\n");
    printf("╔════════════════════════════════════════╗\n");
    printf("║            Dados da Carta 01           ║\n");
    printf("╚════════════════════════════════════════╝\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); // Novo!
    printf("PIB per capita: %.2f mil reais\n", pib_per_capita1); // Novo!

    // Exibição dos Dados da Carta 02
    printf("\nSeguem abaixo os dados da Carta 02:\n");
    printf("╔════════════════════════════════════════╗\n");
    printf("║            Dados da Carta 02           ║\n");
    printf("╚════════════════════════════════════════╝\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2); // Novo!
    printf("PIB per capita: %.2f mil reais\n", pib_per_capita2); // Novo!

    // =================================================================
    // FINALIZAÇÃO
    // =================================================================
    printf("\n"); // Espaço antes da mensagem final
    printf("Parabens, voce cadastrou as cartas corretamente!\n");
    printf("Obrigada por participar!");

    return 0;
}