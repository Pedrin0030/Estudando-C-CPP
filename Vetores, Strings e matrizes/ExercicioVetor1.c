#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

void main(){
    setlocale(LC_ALL, "");

    int tamanho;
    printf("Qual será o tamanho do vetor? ");
    scanf("%d", &tamanho);
    //Definindo variáveis
    float vetor[tamanho], media;
    int cont;


    //Abrindo um laço de repetição com vetor
    for (cont = 0; cont < tamanho; cont++){
        printf("Digite os valores do vetor: ");
        scanf("%f", &vetor[cont]);

    media = media + vetor[cont];



    }
    for (cont = 0; cont < tamanho; cont++){
        printf("Vetor [%d] = %.1f\n", cont, vetor[cont]);

    }

    printf("A média entre os valores é: %f", media / tamanho);

}
