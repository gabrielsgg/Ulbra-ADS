/*
Faça um programa que receba três números, calcule e mostre a multiplicação desses números.
*/
#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float numero1, numero2, numero3, mult_num;
    printf("Digite o primeiro número\n");
    scanf("%f%*c",&numero1);
    printf("Digite o segundo número\n");
    scanf("%f%*c",&numero2);
    printf("Digite o terceiro número\n");
    scanf("%f%*c",&numero3);
    mult_num = numero1 * numero2 * numero3;
    printf("Resultado da multiplicação dos números informados:%.0f\n",mult_num);
    return 0;
}
