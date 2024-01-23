#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;
int funcaotroca(int a, int b){
    //Definindo uma variável
   int aux;

   //contruindo a função
   aux = a;
   a = b;
   b = aux;
    //Imprimindo os valores contrarios
    printf("O valor de A é: %d", a);
    printf("\nO valor de B é: %d", b);


return 0;
}

int main(){
    setlocale(LC_ALL,"");
    /*. Faça um programa que leia 2 valores inteiros e chame uma função que receba estas ˜
2 variaveis e troque o seu conteúdo, ou seja, esta função e chamada passando duas ´
variaveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B ´
tera o valor de A.*/
    //Definind variaveis
    int valor1, valor2;

    //Lendo os valores do teclado
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    //Acessando a função
    funcaotroca(valor1, valor2);




    return 0;
}
