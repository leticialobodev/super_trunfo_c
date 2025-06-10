#include <stdio.h> //inclui a biblioteca que vamos usar
#include <string.h> //inclui uma biblioteca com funções para manipular strings, como strcspn.

int main() { //inclui a função prinicpal dentro da qual vamos fazer tudo acontecer feito mágica!


  // ==============================================================================
  // DECLARAÇÃO DE VARIÁVEIS - CARTA 01 e CARTA 02
  // ==============================================================================

  char estado1; //define um caractere de A a H pra identificar o Estado da cidade 01
  char codigo1[4]; //define o código da carta usando a letra escolhida e um número de 1 a 4
  char nome_cidade1[50]; //define o nome da cidade, que o usuário pode colocr em até 50 caracteres
  int populacao1; //define o número de seres viventes nessa cidade
  float area1; //define a área da cidade
  float pib1; //define o PIB dessa cidade
  int pontos_turisticos1; //define quantos pontos turísticos ela tem
  char temp_buffer[100]; //Buffer temporário para limpar o '\n' que sobra nas leituras.

  // ===============================================================================
  // CABEÇALHO DO JOGO E CARTAS 01 E 02
  // ===============================================================================

  printf("\n-------- Jogo de Cartas Super Trunfo: Tema Paises! --------\n"); //só pra mostrar ao usuário do que estamos falando
  printf("\n"); //um espacinho não faz mal a ninguém, não é mesmo? ;)


  printf("CARTA NUMERO 01\n"); //diz que essa é a carta número 1


  // ===============================================================================
  // ENTRADA DE DADOS - CARTA 01
  // ===============================================================================

  printf("Escolha uma letra de A a H para o Estado desta carta: \n"); //pede ao usuário que escolha uma letra para esse Estado
  scanf(" %c", &estado1); //recebe o caractere que o usuário inserir e coloca na variável estado_01.
  fgets(temp_buffer, 100, stdin);

  printf("Escolha um codigo para a carta 01 (junte a letra que voce escolheu e um numero de 01 a 04): \n");  //dá instruções ao usuário pra que ele escreva o código da carta
  fgets(codigo1, 4, stdin); //recebe o código que o usuário inserir
  codigo1[strcspn(codigo1, "\n")] = '\0'; //Limpa o '\n' que o fgets adiciona ao final da string.

  printf("Qual o nome da cidade 01?: \n"); //pergunta ao usuário qual o nome da cidade 1
  fgets(nome_cidade1, 50, stdin); //recebe o nome da cidade inserido.
  nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0'; //Limpa novamente o '\n' deixado pelo fgets

  printf("Qual a populacao dessa cidade?(informe um numero sem pontos ou virgulas): \n");
  scanf("%d", &populacao1); //recebe a população inserida
  fgets(temp_buffer, 100, stdin);

  printf("Qual a area da cidade 01?(informe um numero decimal): \n"); //pergunta qual a área da cidade 01 ao usuário
  scanf("%f", &area1); //recebe a área inserida
  fgets(temp_buffer, 100, stdin);
  
  printf("Qual o PIB dessa cidade?(informe um numero decimal): \n"); //pergunta qual o PIB dessa cidade
  scanf("%f", &pib1); //recebe o valor decimal inserido
  fgets(temp_buffer, 100, stdin);

  printf("E quantos pontos turísticos ela tem?(informe um numero inteiro): \n"); //pergunta quantos pontos turísticos ela tem
  scanf(" %d", &pontos_turisticos1); //recebe o valor inteiro inserido
  fgets(temp_buffer, 100, stdin);

  // ========================================================
  // EXIBIÇÃO DOS DADOS DA CARTA 01
  // ========================================================

  printf("Seguem abaixo os dados que voce inseriu na Carta 01!\n");
  printf("\n╔════════════════════════════════════════╗\n");
    printf("║            Dados da Carta 01           ║\n");
    printf("╚════════════════════════════════════════╝\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f milhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    

return 0;
}