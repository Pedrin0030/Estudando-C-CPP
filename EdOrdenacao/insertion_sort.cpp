#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;


void imprimeVetor(int vetor[]){
    int i;
    cout << "\n";

    for(i = 0; i < TAM ; i++){
        cout << " |" << vetor[i] << "| ";
    }
}

void insertion_sort(int vetor[TAM]){

    int i, j, atual;

    for(i = 1; i < TAM; i++){

        //Elemento atual em analise
        atual = vetor[i];

        //Elemento anterior ao analisado
        j = i - 1;

        //Analisando membros anteriores
    while( (j >= 0) && (atual < vetor[j])){

        //Posiciona os elementos uma posição para frente
        vetor[j + 1] = vetor[j];

        //Faz j andar para tras
        j = j - 1;
        }
    //Agora que o espaço foi aberto, colocamos o atual(menor numero) na posição correta
    vetor[j + 1] =  atual;

    //Mostra a lista atualizada
    imprimeVetor(vetor);
    }
}

int main(){

    int vetor[TAM] =  {10,9,8,4,7,6,5,3,2,1};

    insertion_sort(vetor);

    imprimeVetor(vetor);

    return 0;
}
