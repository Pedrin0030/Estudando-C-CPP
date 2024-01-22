#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

/*1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char.
Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
cada variavel usando os ponteiros. Imprima os valores das variaveis antes e apos a ´
modificacao.*/
using namespace std;

int main(){
    setlocale(LC_ALL,"");

    //DEfinindo variáveis
    int a = 10,*as;
    float b = 11.14, *bs;
    char c = 'x',*cs;



    //Imprimindo o valor de a em c
    printf("O valor de a é: %d\n", a);

    //Imprimindo a em c++
    cout << "O valor de A é: " << a;

    //Organizando os ponteiros
    as = &a;
    *as = 12;
    printf("\nO novo valor de a é: %d", a);

    //Imprimindo a em C++
    cout << "\n" << "O novo valor de A é: " << a << "\n";


    //Imprimindo o valor de b em c
    printf("\nO valor de b é: %.2f", b);
    //Imprimindno em c++
    cout << "\n" << "O valor de B é: " << b;

    //Organizando os ponteiros
    bs = &b;
    *bs = 48.76;
    printf("\nO novo valor de b é: %.2f", b);

    //Imprimindo o novo valor de b em c++
    cout << "\n" << "O novo valor de B é: " << b;

    cout << "\n";


      //Imprimindo o valor de c em c
    printf("\nO valor de c é: %c\n", c);

    //Imprimindo c em c++
    cout << "O valor de c é: " << c;

    //Organizando os ponteiros
    cs = &c;
    *cs = 's';
    printf("\nO novo valor de c é: %c", c);

    //Imprimindo o novo valor de c em c++
    cout << "\n" << "O novo valor de C é: " << c;

return 0;

}

