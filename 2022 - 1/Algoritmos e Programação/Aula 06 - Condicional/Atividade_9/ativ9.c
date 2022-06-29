#include <stdio.h>
#include <windows.h>
#include <time.h>

struct rgAgora{
    int dia, mes, ano, h, m, s;
};



int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    char ds [7][4]={"dom","seg","ter","qua","qui","sex","sab"};
    struct tm tempo;
    time_t tempoSeg;

    time (&tempoSeg);
    tempo=*localtime(&tempoSeg);

    struct rgAgora agora;

    agora.dia=tempo.tm_mday;
    agora.mes=tempo.tm_mon + 1;
    agora.ano=tempo.tm_year + 1900;
    agora.h=tempo.tm_hour;
    agora.m=tempo.tm_min;
    agora.s=tempo.tm_sec;

    printf("Data atual %02d/%02d/%d (%s) às %2d:%02d:%02d horas \n",agora.dia, agora.mes, agora.ano, ds[tempo.tm_wday], agora.h, agora.m, agora.s);

    switch (agora.mes){
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Março");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Dezembro");
        break;
    default:
        printf("Número Inválido");
        break;
    }
    return 0;
}