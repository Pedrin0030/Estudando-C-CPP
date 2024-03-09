#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 9

using namespace std;

void imprime_vetor(int vetor[TAM]){

    //Auxiliar contador
    int cont;

    //Imprime o vetor
    for(cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";

    }

}

int busca_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){

    //Auxiliar contador
    int cont;

    //Verifica se o valor foi encontrado
    bool valorFoiEncontrado = false;

    //Percorre a lista em busca do valor
    for(cont =  0; cont < TAM; cont++){
        if(vetor[cont] == valorProcurado){
            valorFoiEncontrado = true;
            *posicaoEncontrada = cont;
             break;  // Interrompe o loop quando o valor é encontrado
        }

    }

    if(valorFoiEncontrado){
        return 1;
    }else{
        return -1;
    }
}

int busca_binaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){
    int esquerda = 0;
    int direita = TAM - 1;
    int meio;

    while(esquerda <= direita){

        //Encontra o meio da análise
        meio = (esquerda + direita)/2;

        //Quando o valor do meio é encontrado
        if(valorProcurado == vetor[meio]){
            *posicaoEncontrada = meio;
            return 1;
        }

        //Ajustando os limites laterais
        if(vetor[meio] < valorProcurado){
            esquerda = meio + 1;

        }else{
            direita = meio - 1;
        }

    }
   return -1;


}
int main(){
    setlocale(LC_ALL, "");
    int vetor[TAM] = {1,23,44,56,63,72,84,90,98};
    int valorProcurado;
    int posicao, posicaoEncontrada;

    //Auxilixar contador
    int cont;

    imprime_vetor(vetor);

    printf("\nQual número deseja encontrar?");
    scanf("%d", &valorProcurado);

    if(busca_binaria(vetor, valorProcurado, &posicaoEncontrada) == 1){
        cout << "O valor foi encontrado na posição:" << posicaoEncontrada;
    }else{
        cout << "Valor não encontrado";
    }
    return 0;
}

