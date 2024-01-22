#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){

    setlocale(LC_ALL, "");

    //Definindo variavies
    int nota1, nota2, nota3, resultado;

    //Imprimindo os valores
    printf("Digite os valores separados por espaço: ");
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    resultado = nota1 * nota2 * nota3;

    printf("\nO valor da multiplicação é: %d", resultado);

}

