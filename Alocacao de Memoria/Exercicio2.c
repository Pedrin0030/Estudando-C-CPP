#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* valorRecebido (int tam){
//Definindo variaveis auxiliar
int *v;

//A alocação da memória
v = (int *) malloc (tam *sizeof(int));


 return v;
}

void main (){
    setlocale(LC_ALL, "");

/*Faça um programa que leia do usuário o tamanho de um vetor (inteiros) a ser lido e faça
a sua alocação dinâmica de memória. Depois, leia do usuário seus valores e imprima o
vetor lido e mostre quantos dos números são pares e quantos são ımpares.*/

  //Definindo variaveis
  int *vetor, tam, i;
  int impar = 0, par = 0;

  //Recebendo o tamanho do vetor
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tam);


  //Vetor recebe o valor da alocação
  vetor = valorRecebido(tam);

//Laço de repetição para receber os valores e contar quantos números pares e ímpares
  for (i = 0; i < tam; i++){
    printf("\nDigite o valor: ");
    scanf("%d", &vetor[i]);

//Condicional para os valores ímpares e pares
if (vetor[i] % 2 == 0){
        par++;
    }else {
        impar++;
    }


  }

  //Laço de repetição para imprimir os valores lidos
 for (i = 0; i < tam; i++){
    printf("\nO valor do inteiro: %d", vetor[i]);



  }
//Imprime a quantidade de números impares e pares
 printf("\nA quantidade de números pares são: %d", par);
    printf("\nA quantidade de números ímpares são: %d", impar);
}
