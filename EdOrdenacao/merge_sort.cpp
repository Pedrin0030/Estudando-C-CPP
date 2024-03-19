#include <stdlib.h>
#include <iostream>
#include <string>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[]){

    int i;
    cout << "\n";

    for(i = 0; i < TAM; i++){
        cout << " |" << vetor[i] << "| ";
    }
}

//Juna os dois subarrays criados ao dividir o vetor principal
void merge(int vetor[TAM], int indiceEsquerdo, int meio, int indiceDireito){

    int i, j, k;                        //Auxiliares
    int n1 = meio - indiceEsquerdo + 1; //Tamanho do primeiro vetor auxiliar
    int n2 = indiceDireito - meio;      //Tamanho do segundo vetor auxiliar

    //Cria dois Arrays temporarios
    int vetorEsquerdo[n1], vetorDireito[n2];

    //Passa os elementos do vetor principal para o primeiro vetor auxiliar (Esquerda)
    for(i = 0; i < n1; i++){
        vetorEsquerdo[i] = vetor[indiceEsquerdo + i];
    }

    //Passa os elementos do vetor principal para o segundo vetor auxiliar (Direita)
    for(j = 0; j < n2; j++){
        vetorDireito[j] = vetor[meio + 1 + j];
    }

    //Reseta as variaveis
    i = 0;
    j = 0;
    k = indiceEsquerdo;

    while(i < n1 && j < n2){

        //Caso o valor na esquerda seja menor
        if(vetorEsquerdo[i] <= vetorDireito[j]){

            //Passa para o meu vetor principal o valor menor
            vetor[k] = vetorEsquerdo[i];

            //Incrementa o auxiliar para passar a análise para os próximos valores do vetor auxiliar
            i++;
        }else{

            //Passa para o meu vetor principal o valor menor
            vetor[k] = vetorDireito[j];

            //Incrementa o auxiliar para passar a análise para os próximos valores do vetor auxiliar
            j++;
        }

    //Aumenta o indice de posicionamento do vetor
    k++;
    }

    //Se faltarem alguns elementos do array ESQUERDO passa eles para o array principal
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

void merge_sort(int vetor[TAM], int indiceEsquerdo, int indiceDireito){

    if(indiceEsquerdo < indiceDireito){

        //Encontra o meio
        int meio = indiceEsquerdo + (indiceDireito - indiceEsquerdo) / 2;

        //Da metade para trás
        merge_sort(vetor, indiceEsquerdo, meio);

        //Da metade para frente
        merge_sort(vetor, meio + 1, indiceDireito);



        //Une os dois subarrays que foram criados
        merge(vetor, indiceEsquerdo, meio, indiceDireito);
        imprimeVetor(vetor);

    }

}

int main(){

    int vetor[TAM] = {9,10,3,4,6,7,5,1,8,2};

    merge_sort(vetor, 0, TAM - 1);

    imprimeVetor(vetor);

return 0;
}
