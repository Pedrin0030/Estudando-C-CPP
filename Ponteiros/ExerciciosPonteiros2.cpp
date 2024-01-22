#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>


using namespace std;

int main(){

    setlocale(LC_ALL, "");

     /*Escreva um programa que contenha duas variaveis inteiras. Compare seus endereços e ´
    exiba o maior endereço.*/


    //Definindo as variáveis
    int atds, b, *as, *bs;

    //Definindo os ponteiros
    as = &atds;
    //Imprindo o valor da variavel
    printf("O valor de a é: %d", as);

    bs = &b;

    //Imprimindo o endereço de b
    printf("\nO endereço é: %d", bs);

    //Condição de impressão
    if (bs > as){
        printf("\nO endereço de A: %d", as);

    }else {
        printf("\nO endereço de B: %d", bs);
    }

    //Utilizando c++
    cout << "\n";
    //Definindo variaveis
    int d, *ds, f, *fs;

    //Organizando o ponteiro
    ds = &d;
    fs = &f;

    //Imprimindo os endereços das variaveis
    cout << "\n" << "O endereço de D é: " << ds;
    cout << "\n" << "O endereço de F é: " << fs;

    //Condição para impressão
    if (ds > fs){
        cout << "\n" << "O valor do endereço de F é maior que o de D: " << fs;
    } else{
        cout << "\n" << "O valor do endereço de D é maior que o de F: " << ds;
    }

    return 0;
}
