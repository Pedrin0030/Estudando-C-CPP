#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um trecho de codigo para fazer a criaco dos novos tipos de dados conforme ˜
solicitado abaixo:
• Horario: composto de hora, minutos e segundos. ´
• Data: composto de dia, mes e ano. ˆ
• Compromisso: composto de uma data, horario e texto que descreve o compromisso.*/

typedef struct horario{
    int hora;
    int minutos;
    int segundos;
}horario;

typedef struct Data{
    int dia;
    int mes;
    int ano;

}Data;

struct Compromisso{
    horario marcado;
    Data marcada;
    char descricao[100];

};

int main(){
    setlocale(LC_ALL, "");

    //Cria a hora
    struct Compromisso meuCompromisso;

    //Modifica os campos
    //Mudando a Data
    meuCompromisso.marcada.dia = 02;
    meuCompromisso.marcada.mes = 06;
    meuCompromisso.marcada.ano = 2024;

    //Mudando o horário
    meuCompromisso.marcado.hora = 14;
    meuCompromisso.marcado.minutos = 30;
    meuCompromisso.marcado.segundos = 00;

    //Mudando o campo da descrição
    strcpy(meuCompromisso.descricao, "Essa é uma reunião de orientação para desenvolvimento do trabalho X");

    //Mostrando os valores do Scruct
    printf("Veja a seguir o compromisso marcado:");
    printf("\nDescrição: %s", meuCompromisso.descricao);
    printf("\nData da reunião: %d / %d / %d", meuCompromisso.marcada.dia,meuCompromisso.marcada.mes, meuCompromisso.marcada.ano);
    printf("\nHorário da reunião: %d:%d:%d", meuCompromisso.marcado.hora, meuCompromisso.marcado.minutos, meuCompromisso.marcado.segundos);


}
