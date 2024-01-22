#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




void main(){
    setlocale (LC_ALL, "");

    //Definindo variáveis
    float nota1, nota2, resultado;

    //Imprimindo primeiro valor
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    //Imprimindo segundo valor
    printf("\nDigite o segundo nota: ");
    scanf("%f", &nota2);

    //Diferença entre os valor
    resultado = abs (nota1 - nota2);

    //Mostrando o resultado
    printf("\nO valor da diferença é: %.1f", resultado);


}
