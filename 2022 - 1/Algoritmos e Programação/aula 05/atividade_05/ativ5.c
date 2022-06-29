/*
Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10%.
*/
#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float preco, desc, novo_preco;
    printf("Digite o valor do produto\n");
    scanf("%f%*c", &preco);
    desc = preco * 10/100;
    novo_preco = preco - desc;
    printf("Novo preço é:%.2f",novo_preco);
    return 0;
}