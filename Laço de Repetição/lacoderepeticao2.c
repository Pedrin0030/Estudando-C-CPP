#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
    setlocale(LC_ALL,"");

//Definindo a variavel
int i = 10;

//Laço de repetição com While
while(i <= 20){

    //Criando a condicional
    if (i % 2 == 0){
    //Imprimindo
    printf("%d ", i);

    }
i++;


}

printf("\n");

i = 10;
//Laço de repetição com do While
do{
    if (i % 2 == 0){
        //Imprimindo
        printf("%d ", i);

    }
i++;

}while(i <= 20);

printf("\n");

//Laço de repetição com For
for (i = 10; i <=20; i++){
    //Iniciando a Condicional
    if (i % 2 == 0){
        //Imprimindo
        printf("%d ", i);

    }

}
}
