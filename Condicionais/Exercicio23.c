#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
    setlocale(LC_ALL,"");


    //definindo váriaveis
    float valor1, valor2, valor3;
    int opcao;

    //Lendo os valores
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("\nDigite o segundo valor: ");
    scanf("%f", &valor2);

    printf("\nDigite o terceiro valor: ");
    scanf("%f", &valor3);


    //criando o menu
    printf("\n1 - Somar");
    printf("\n2 - Subtrair");
    printf("\n3 - Multiplicar");
    printf("\n4 - Dividir");
    printf("\n");
    printf("\nEscolha a opção desejada: ");
    scanf("%d", &opcao);


    //abrindo o swit case
    switch (opcao) {
        case 1:
            printf("\nA soma entre %.2f + %.2f + %.2f = %.2f", valor1, valor2, valor3, valor1 + valor2 + valor3);
            break;

        case 2:
            printf("\nA diferença entre %.2f - %.2f - %.2f = %.2f", valor1, valor2, valor3, valor1 - valor2 - valor3);
            break;

        case 3:
            printf("\nA multiplicação entre %.2f x %.2f = %.2f", valor1, valor2, valor1 * valor2);
            break;

        case 4:
            printf("\nA divisão entre %.2f / %.2f = %.2f", valor1, valor2, valor1 / valor2);
            break;

        default:
            printf("\nOpção inválida!");
            break;
    }



}
