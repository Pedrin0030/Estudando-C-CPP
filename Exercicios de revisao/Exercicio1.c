#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
    /*Fazer um programa para receber um número inteiro de segundos do usuário e
    imprimir a quantidade correspondente em horas, minutos e segundos.*/

    //Definindo variaveis
    int numero;
    float horas = 3600, minutos = 60;

    //Imprimindo mensagem
    printf("Digite os segundos: ");
    scanf("%d", &numero);

    //Imprimindo os valores
    printf("\nO quantidade de segundos: %d", numero);
    printf("\nNa quantidade %d de segundos tem %.2f horas", numero, numero / horas);
    printf("\nNa quantidade %d de segundos tem %.2f minutos", numero, numero / minutos);

}
