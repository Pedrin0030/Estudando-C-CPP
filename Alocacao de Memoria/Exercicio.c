#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* valorRecebido (int tam){

    //Nova variavel ponteiro
    int *v;

    //Faz a alocação da memoria que será utilizada
    v = (int *) malloc (tam *sizeof(int));


    return v;
}


void main(){
    setlocale(LC_ALL, "");

/*1) Crie um programa que:
a) Aloque dinamicamente um vetor de 5 números inteiros
b) Peça para o usuário digitar os 5 números no espaço alocado
c) Mostre na tela os 5 números
d) Libere a memória alocada.*/


    //Definindo variaveis
    int *vetor, tam, i;

    //Recebendo os valores do usuario
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    //mO ponteiro recebe o resultado da função gerada
    vetor = valorRecebido(tam);

    //Laço de repetição para receber os valores que serão alocados
    for (i = 0; i < 5; i++){
        printf("\n Digite o valor: ");
        scanf("%d", &vetor[i]);
    }

    //Imprime os valores alocados
    for (i = 0; i < 5; i++){
        printf("\nO valore dos vetores são: %d", vetor[i]);
    }

    //Limpa os vetores
    free (vetor);

}
