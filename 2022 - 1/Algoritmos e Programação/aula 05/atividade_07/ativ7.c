/*
Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.
*/
#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float peso, npeso_15, npeso_20;
    printf("Peso atual\n");
    scanf("%f%*c", &peso);
    npeso_15 = (peso * 15/100) + peso;
    npeso_20 = (peso * 20/100) + peso;
    printf("Novo peso após engordar 15% :%.2f\n", npeso_15);
    printf("Novo peso após engordar 20% :%.2f\n", npeso_20);
    return 0;
}