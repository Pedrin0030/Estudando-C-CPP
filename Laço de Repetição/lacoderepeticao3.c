#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
    setlocale(LC_ALL, "");

    //Definindo variaveis
    int valor, i, aux = 0;

    //Entrada de valores
    printf("Digite um número: ");
    scanf("%d", &valor);


    //Iniciando o laço de repetição
    for (i = 1; i <= valor; i++){
        //Primeira Condição
        if(valor%i == 0){
            aux++;
        }

        //Exibe o resto da divisão na tela
        printf("%d / %d tem o resto = %d \n", valor, i, valor%i);
    }
    if (aux == 2){
        printf("O número é primo!");

    }else {
        printf("O número não é primo");
    }

}
