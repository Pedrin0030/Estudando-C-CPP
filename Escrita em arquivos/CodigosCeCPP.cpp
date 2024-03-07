#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;


int main() {


    //Cursor que ira percorrer cada letra
    int c;

    //Arquivo a ser lido
    FILE *file;

    //Abre o arquivo no diretorio escolhido
    file = fopen("Texto.txt", "r");

    //Se o arquivo foi encontrado
    if(file){
        //Encontra letras(até o fim do arquivo
        while((c = getc(file)) != EOF){
            printf("%c", c);
        }
    fclose(file);
    }



    return 0;
}
