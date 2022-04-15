/*
Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado.
*/
#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float lado1, lado2, a_quadrado;
    printf("Digite a medida do lado1\n");
    scanf("%f%*c",&lado1);
    printf("Digite a medida do lado2\n");
    scanf("%f%*c",&lado2);
    a_quadrado = lado1 * lado2;
    printf("A área do quadrado é :%.2f\n",a_quadrado);
    return 0;
}