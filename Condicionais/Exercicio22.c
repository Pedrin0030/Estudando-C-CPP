#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



void main(){
    setlocale(LC_ALL, "");

    //definindo as vaŕiáveis
    int lado1, lado2, lado3;
    //Lendo os três valores
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &lado1);

    printf("\nDigite o segundo valor: ");
    scanf("%d", &lado2);

    printf("\nDigite o terceiro valor: ");
    scanf("%d", &lado3);


    //Comparando se os valores são iguais
    if ((lado1 == lado2) && (lado2 == lado3)){
        printf("\nO trinângulo é equilátero");

    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("\nO triângulo é isósceles");

    } else {
        printf("\nO triângulo escaleno");

    }





}
