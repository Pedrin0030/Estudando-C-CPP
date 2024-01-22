#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Função principal do programa
void main(){
    setlocale(LC_ALL,"");


    //Definindo a variavel
    int cont = 10;

    //Iniciando o laco de repeticao com While
    while(cont >= 0){

        //imprimindo na tela
        printf("\n%d", cont);

        //incremento
        cont--;

    }
    printf("\n");

//Definindo nova variável
     cont = 10;

    //Laço de repetição utilizando Do While
    do{
        //Imprimindo
        printf("\n%d", cont);

        //incremento
        cont--;


    }while(cont >= 0);

    printf("\n");


    //Laço de repetição utilizando For
    for(cont = 10; cont >=1 ; cont--){
    //Imprimindo
        printf("\n%d", cont);

    }

}

