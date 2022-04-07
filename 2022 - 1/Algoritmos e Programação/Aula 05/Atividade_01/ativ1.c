/*
Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo
segundo.
*/
#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float numero1, numero2, sub_numeros;
    printf("Digite o primeiro Número\n");
    scanf("%f%*c",&numero1);
    printf("Digite o segundo Número\n");
    scanf("%f%*c",&numero2);
    sub_numeros = numero1 - numero2;
    printf("Resultado da subtração:%.2f\n",sub_numeros);
    return 0;
}


