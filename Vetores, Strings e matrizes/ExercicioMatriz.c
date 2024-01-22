#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL, "");

    //Definindo as variaveis
    int matriz[2][2], i, j, aux1, aux2;

    //Lendo os valores da matriz
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite os valores: ");
            scanf("%d", &matriz[i][j]);


        }

    }
    //Auxiliares
    aux1 = matriz[0][0];
    aux2 = matriz[0][1];

    matriz[0][0] = matriz[1][0];
    matriz[0][1] = matriz[1][1];
    matriz[1][0] = aux1;
    matriz[1][1] = aux2;




    //Imprimindo os valores na tela
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", matriz[i][j]);

        }
             printf("\n");
    }


}
