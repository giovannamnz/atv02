#include<stdio.h>

int main(){

//O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor

 int valorCarro;
 int custoFabrica = 28;
 int impostos = 45; 
 int valorFinal;

 printf("Digite o valor do carro: ");
 scanf("%d", &valorCarro);

 valorFinal = valorCarro + (valorCarro * ( custoFabrica /100)) + (valorCarro * ( impostos /100));

 printf("O valor total do carro e: %d", valorFinal);



return 0; 
}
