#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main (){

    setlocale(LC_ALL, "");

    //Definindo as variáveis
    float nota1, nota2,nota3, resultado;

    //lendo os valores
    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);

    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);

    printf("\nDigite a terceira nota: ");
    scanf("%f", &nota3);

    //Fazendo a média entre as notas
    resultado = (nota1 + nota2 + nota3) / 3;
    printf("\nA média do aluno foi: %f", resultado);


    //Condicional para saber se foi ou não aprovado
    if (resultado > 7){
        printf("\nO aluno está aprovado!");
    }else{
        printf("\nO aluno está reprovado!");
    }





}
