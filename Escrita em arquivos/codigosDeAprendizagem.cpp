#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;


int main(){

    //Cria o objeto de arquivo
    ofstream arquivoDeSaida;

    //Abre o arquivo o cria caso não exista
    arquivoDeSaida.open("Texto.txt", std::ios_base::app);

    //Escreve algo
    arquivoDeSaida << "Hello Word";

    //Fecha o arquivo
    arquivoDeSaida.close();


return 0;
}
