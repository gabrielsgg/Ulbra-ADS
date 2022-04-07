/*
Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.
*/
#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float peso_q, peso_g;
    printf("Digite o peso em quilos\n");
    scanf("%f%*c",&peso_q);
    peso_g = peso_q * 1000;
    printf("Peso em gramas:%.0f",peso_g);
    return 0;
}