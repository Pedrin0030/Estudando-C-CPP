#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main() {
    setlocale(LC_ALL, "");

    float a, b;
    //Primeira nota
    printf("Digite a primeira nota: ");
    scanf("%f", &a);

    //Segunda nota
    printf("\n Digite a segunda nota: ");
    scanf("%f", &b);

    float media = (a + b) / 2;

    //Nota final
    printf("A média entre as notas é: %.2f", media);



}
