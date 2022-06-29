/*
Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, consi-
derando peso 2 para a primeira e peso 3 para a segunda.
*/
#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float nota1, nota2, p1, p2, media;
    p1 = 2;
    p2 = 3;
    printf("Digite a primeira nota\n");
    scanf("%f%*c",&nota1);
    printf("Digite a segunda nota\n");
    scanf("%f%*c",&nota2);
    media = (nota1*p1+nota2*p2) / (p1+p2); 
    printf("A média ponderada é:%.f", media);
    return 0;
}