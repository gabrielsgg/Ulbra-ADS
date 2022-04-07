/*
Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
salário final.
*/
#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float salario, vlr_venda, comissao, sal_final;
    printf("Digite o valor do sálario\n");
    scanf("%f%*c",&salario);
    printf("Digite o valor das vendas\n");
    scanf("%f%*c",&vlr_venda);
    comissao = vlr_venda * 4/100;
    sal_final = salario + comissao;
    printf("Valor total das comissões:%.2f\n",comissao);
    printf("Valor do sálario final:%.2f",sal_final);
    return 0;
}