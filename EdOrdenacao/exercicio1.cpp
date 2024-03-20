#include <stdlib.h>
#include <iostream>
#include <string>
#define TAM 16

/*Dada a sequência de números: 3 4 9 2 5 8 2 1 7 4 6 2 9 8 5 1, ordene-a em ordem não
decrescente segundo os seguintes algoritmos, apresentando a sequência obtida após
cada passo do algoritmo:
a. MergeSort
b. QuickSort*/

using namespace std;

void imprimeVetor(int vetor[]){

    int i;
    cout << "\n";

    for(i = 0; i < TAM; i++){

        cout << " |" << vetor[i] << "| ";
    }
}
void merge(int vetor[TAM], int indiceEsquerda, int meio, int indeceDireita){

    int i, j, k;
    int n1 = meio - indiceEsquerda + 1;
    int n2 = indeceDireita - meio;

    int vetorEsquerdo[n1], vetorDireito[n2];

    for(i = 0; i < n1; i++){

       vetorEsquerdo[i] =  vetor[indiceEsquerda + i];
    }

    for(j = 0; j < n2; j++){

        vetorDireito[j] = vetor[meio + 1 + j];
    }

    i = 0;
    j = 0;
    k = indiceEsquerda;

    while(i < n1 && j < n2){

        if(vetorEsquerdo[i] <= vetorDireito[j]){

            vetor[k] = vetorEsquerdo[i];
            i++;
        } else{
            vetor[k] = vetorDireito[j];
            j++;
        }
    k++;

    }
  while(i < n1){
        vetor[k] = vetorEsquerdo[i];
        i++;
        k++;
    }

    //Se faltarem alguns elementos do array DIREITO passa eles para o array principal
    while(j < n2){
        vetor[k] = vetorDireito[j];
        j++;
        k++;
    }
}

void merge_sort(int vetor[TAM], int indiceEsquerda, int indiceDireita){

    if(indiceEsquerda < indiceDireita){

        int meio = indiceEsquerda + (indiceDireita - indiceEsquerda ) / 2;

        merge_sort(vetor, indiceEsquerda, meio);

        merge_sort(vetor, meio + 1, indiceDireita);

        merge(vetor,indiceEsquerda, meio, indiceDireita);

        imprimeVetor(vetor);
    }
}

void quick_sort(int vetor[TAM], int inicio, int fim){

    int pivo, meio, esq, dir, aux;

    esq = inicio;
    dir = fim;

    meio = (int) ((esq + dir) / 2);
    pivo =  vetor[meio];

    while( dir > esq){

        while( vetor[esq] < pivo){
            esq = esq + 1;
        }
        while(vetor[dir] > pivo){
            dir = dir -1;
        }


        if(esq <= dir){
            aux = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = aux;

            esq = esq + 1;
            dir = dir - 1;
        }
        imprimeVetor(vetor);
    }
    if( inicio < dir){
        quick_sort(vetor, inicio, dir);
    }
    if(fim > esq){
        quick_sort(vetor,esq, fim);
    }
}

int main(){

    int vetor[TAM] = {3,4,9,2,5,8,2,1,7,4,6,2,9,8,5,1};

    merge_sort(vetor, 0, TAM - 1);

    imprimeVetor(vetor);

    cout << "\n" << "\n";

    quick_sort(vetor, 0, TAM);

    imprimeVetor(vetor);
return 0;
}
