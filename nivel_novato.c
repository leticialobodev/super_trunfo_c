#include <stdio.h> //inclui a biblioteca que vamos usar
int main() { //inclui a função prinicpal dentro da qual vamos fazer tudo acontecer feito mágica!
  char estado_01; //define um caractere de A a H pra identificar o Estado da cidade 01
  char codigo_carta_01[3]; //define o código da carta usando a letra escolhida e um número de 1 a 4
  char nome_cidade_01[50]; //define o nome da cidade, que o usuário pode colocr em até 50 caracteres
  int populacao_01; //define o número de seres viventes nessa cidade
  float area_01; //define a área da cidade
  float pib_01; //define o PIB dessa cidade
  int pontos_turisticos_01; //define quantos pontos turísticos ela tem
  
  printf("\n-------- Jogo de Cartas Super Trunfo: Tema Paises! --------\n"); //só pra mostrar ao usuário do que estamos falando

  printf("\n"); //um espacinho não faz mal a ninguém, não é mesmo?

  printf("CARTA NUMERO 01\n"); //diz que essa é a carta número 1
  printf("Escolha uma letra para o Estado desta carta: \n"); //pede ao usuário que escolha uma letra para esse Estado
  scanf(" %c", &estado_01); //recebe o que o usuário inserir e coloca na variável estado_01

  printf("Escolha um codigo para a carta 01 (junte a letra que voce escolheu e um numero de 01 a 04): ");  //dá instruções ao usuário pra que ele escreva o código da carta
  fgets(codigo_carta_01, 3, stdin); //recebe o código que o usuário inserir

  printf("Qual o nome da cidade 01?: \n"); //corrigir essa linha depois e adicionar uma entrada de dados abaixo


  scanf("%d", &populacao_01); //corrigir essa linha depois e adicionar um printf acima

  printf("Qual a area da cidade 01? : \n"); //pergunta qual a área da cidade 01 ao usuário
  scanf("%f", &area_01); //recebe a área inserida

  printf("Qual o PIB dessa cidade?: \n"); //pergunta qual o PIB dessa cidade
  scanf("%f", &pib_01); //recebe o valor decimal inserido

  printf("E quantos pontos turísticos ela tem?: \n"); //pergunta quantos pontos turísticos ela tem
  scanf(" %c", pontos_turisticos_01); //corrigir depois essa linha: pois int tem um especificador %d no scanf, além de adicionar o &.



    

return 0;
}