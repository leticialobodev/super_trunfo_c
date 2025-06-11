#include <stdio.h> //inclui a biblioteca principal
#include <string.h> //inclui uma biblioteca com funções para manipular strings, como strcspn.

int main() { //inclui a função principal que vamos utilizar.


  // ==============================================================================
  // DECLARAÇÃO DE VARIÁVEIS - CARTA 01 e CARTA 02
  // ==============================================================================

  char estado1; //Armazena um caractere de A a H pra identificar o Estado da cidade 01
  char codigo1[4]; //Armazena o código da carta usando a letra escolhida e um número de 1 a 4
  char nome_cidade1[50]; //Armazena o nome da cidade, que o usuário pode colocar em até 50 caracteres
  int populacao1; //Armazena a população dessa cidade
  float area1; //Armazena a área da cidade
  float pib1; //Armazena o PIB dessa cidade
  int pontos_turisticos1; //Armazena quantos pontos turísticos ela tem
  char temp_buffer[100]; //Buffer temporário para limpar o '\n' restante das leituras.

  char estado2; //Armazena um caractere de A a H pra identificar o Estado da cidade 02
  char codigo2[4]; //Armazena o código da carta usando a letra escolhida e um número de 1 a 4
  char nome_cidade2[50]; //Armazena o nome da cidade, que o usuário pode colocar em até 50 caracteres
  int populacao2; //Armazena a população dessa cidade
  float area2; //Armazena a área dessa cidade
  float pib2; //Armazena o PIB dessa cidade
  int pontos_turisticos2; //Armazena quantos pontos turísticos ela tem

  // ===============================================================================
  // CABEÇALHO DO JOGO, ENTRADA E EXIBIÇÃO DE DADOS DAS CARTAS 01 E 02
  // ===============================================================================

  //Os blocos para as cartas 01 e 02 seguem ambos a mesma lógica de leitura/exibição!
  //As perguntas e leituras são feitas sequencialmente.

  printf("----- Ola! Bem-vindo ao Jogo Super Trunfo! -----\n"); //Saudação ao usuário
  printf("\n-------- Jogo de Cartas Super Trunfo: Tema Paises! --------\n"); //Para introduzir ao usuário do que se trata o programa
  printf("\n"); //Espaço para melhor entendimento e clareza no código

  // ===============================================================================
  // ENTRADA DE DADOS - CARTA 01
  // ===============================================================================

  printf("Agora, voce devera inserir os dados que pedimos abaixo para cadastrar duas cartas no jogo!\n"); //Interação com o usuário para maior usabilidade, melhor experiência e clareza.
  printf("Fique a vontade para cadastrar os dados que quiser, sempre obedecendo as regras!\n");
  printf("\n");
  printf("Obs: Os dados inseridos não precisam ser verdadeiros ou baseados em cidades reais.\n");

  printf("\n");
  printf("\n");

  printf("CARTA NUMERO 01\n"); //Informa que essa é a carta número 1

  printf("\n");

  printf("Escolha uma letra de A a H para o Estado desta carta: \n"); //Pede ao usuário que escolha uma letra para esse Estado.
  scanf("%c", &estado1); //Recebe o caractere que o usuário inserir e coloca na variável estado_01.
  fgets(temp_buffer, sizeof(temp_buffer), stdin); //Limpa o buffer de entrada (stdin) após uma leitura feita com scanf.

  printf("Escolha um codigo para a carta 01 (escolha um numero de 01 a 04, utilizando dois algarismos): \n");  //Instrui o usuário para que ele escolha e insira o código da carta
  fgets(codigo1, sizeof(codigo1), stdin); //Recebe o código que o usuário inserir
  codigo1[strcspn(codigo1, "\n")] = '\0'; //Limpa o '\n' que o fgets adiciona ao final da string.

  printf("Qual o nome da cidade 01?: \n"); //Pergunta ao usuário qual o nome da cidade 1
  fgets(nome_cidade1, sizeof(nome_cidade1), stdin); //Recebe o nome da cidade inserido.
  nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0'; //Limpa novamente o '\n' deixado pelo fgets

  printf("Qual a populacao dessa cidade?(informe um numero sem pontos ou virgulas): \n");
  scanf("%d", &populacao1); //Recebe a população inserida
  fgets(temp_buffer, sizeof(temp_buffer), stdin);

  printf("Qual a area da cidade 01?(informe um numero decimal, utilizando apenas um ponto para representar a virgula): \n"); //Pergunta qual a área da cidade 01 ao usuário
  scanf("%f", &area1); //Recebe a área inserida
  fgets(temp_buffer, sizeof(temp_buffer), stdin);
  
  printf("Qual o PIB dessa cidade?(informe um numero decimal, também com ponto): \n"); //Pergunta qual o PIB dessa cidade
  scanf("%f", &pib1); //Recebe o valor decimal inserido
  fgets(temp_buffer, sizeof(temp_buffer), stdin);

  printf("E quantos pontos turísticos ela tem?(informe um numero inteiro): \n"); //Pergunta quantos pontos turísticos ela tem
  scanf("%d", &pontos_turisticos1); //Recebe o valor inteiro inserido
  fgets(temp_buffer, sizeof(temp_buffer), stdin);

  // ========================================================
  // ENTRADA DE DADOS CARTA 02
  // ========================================================

  printf("\n");
  printf("\n");

  printf("CARTA NUMERO 02\n");

  printf("\n");

  printf("Escolha uma letra de A a H para o Estado desta carta(Pode repetir a letra se o estado for o mesmo da carta 01): \n");
  scanf("%c", &estado2);
  fgets(temp_buffer, sizeof(temp_buffer), stdin);

  printf("Escolha um codigo para a carta 02 (escolha um numero de 01 a 04, utilizando dois algarismos): \n");
  fgets(codigo2, sizeof(codigo2), stdin);
  codigo2[strcspn(codigo2, "\n")] = '\0';

  printf("Qual o nome da cidade 02?: \n");
  fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
  nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';

  printf("Qual a populacao dessa cidade? (informe um numero sem pontos ou virgulas): \n");
  scanf("%d", &populacao2);
  fgets(temp_buffer, sizeof(temp_buffer), stdin);

  printf("Qual a area da cidade 02? (Informe um número decimal, utilizando o ponto): \n");
  scanf("%f", &area2);
  fgets(temp_buffer, sizeof(temp_buffer), stdin);

  printf("Qual o PIB dessa cidade? (Informe um numero decimal, utilizando o ponto tambem): \n");
  scanf("%f", &pib2);
  fgets(temp_buffer, sizeof(temp_buffer), stdin);

  printf("E quantos pontos turisticos ela tem? (Informe um numero inteiro): \n");
  scanf("%d", &pontos_turisticos2);
  fgets(temp_buffer, sizeof(temp_buffer), stdin);


  // ========================================================
  // EXIBIÇÃO DOS DADOS DA CARTA 01
  // ========================================================

  printf("Seguem abaixo os dados que voce inseriu na Carta 01!\n");
  printf("\n╔════════════════════════════════════════╗\n");
    printf("║            Dados da Carta 01           ║\n");
    printf("╚════════════════════════════════════════╝\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f milhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    


    // =====================================================
    // EXIBIÇÃO DOS DADOS DA CARTA 02
    // =====================================================

    printf("Seguem abaixo os dados que você inseriu na carta 02!\n");

    printf("\n╔════════════════════════════════════════╗\n");
      printf("║            Dados da Carta 02           ║\n");
      printf("╚════════════════════════════════════════╝\n");
  
  printf("Estado: %c\n", estado2);
  printf("Codigo: %c%s\n", estado2, codigo2);
  printf("Nome da Cidade: %s\n", nome_cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f milhoes de reais\n", pib2);
  printf("Pontos Turisticos: %d\n", pontos_turisticos2);

  //=================================================================
  // FINALIZAÇÃO
  //=================================================================

  printf("\n");
  printf("Parabens, voce cadastrou as cartas corretamente!\n");
  printf("Obrigada por participar!");

return 0;
}