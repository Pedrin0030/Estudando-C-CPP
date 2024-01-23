#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>


using namespace std;

int main(){
    setlocale(LC_ALL, "");

    /*. Escreva um programa que contenha duas variaveis inteiras. Leia essas variáveis do ´
teclado. Em seguida, compare seus endereços e exiba o conteudo do maior endereço.*/

    //Definindo variáveis
    int a, b, *pontA, *pontB;

    //Imprimindo texto para usuário digtar o conteúdo
    printf("Digite  número de a: ");

    //Lendo valores do teclado
    scanf("%d", &a);

    //Imprimindo o texto para usuário digitar o conteúdo
    printf("\nDigite o número de b: ");

    //Lendo valores do teclado
    scanf("%d", &b);

    //Definindo os ponteiros
    pontA = &a;
    pontB = &b;

    //Criando a condição de maior
    if (pontB > pontA){
        printf("O conteúdo de B: %d", pontB);

    }else {
        printf("O conteúdo de A: %d", pontA);
    }
//---------------------------------------------------------------
    printf("\n ");

printf("\n ");
    //Definindo variáveis
    int f, j, *pontF, *pontJ;
    //Imprimindo textos
    cout << "Digite o valor F: ";
    //Lendo os valores
    cin >> f;
    //Imprimindo o valor de J
    cout << "\n" << "Digite o valor de J: ";
    //Lendo os valores
    cin >> j;

    //Definindo os ponteiros
    pontF = &f;
    pontJ = &j;

    //Criando a condição
    if (pontJ > pontF){
        cout << "\n" << "O valor do conteúdo é o de J: " << j;
        cout << "\n" << "O endereço dele é: " << pontJ;
    }else{
        cout << "\n" << "O valor do conteúdo é o de F: " << f;
        cout << "\n" << "O endereço dele é: " << pontF;
    }
    return 0;
}
