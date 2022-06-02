/* Interprete o problema a seguir: Uma revendedora de carros usados paga a seus funcionários vendedores, um salário fixo por mês, mais uma comissão de 10%, sobre o salário mensal, por cada carro vendido. Faça um algoritmo que calcule o salário mensal do vendedor, e ao final apresente o valor do seu salário mensal e da comissão recebida. Após analisarmos o problema, pode-se afirmar que a assertiva que melhor descreve a interpretação do programa proposto é: */

#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float salario,novo_salario, comissao;
    printf("Digite o salario:\n");
    scanf("%f%*c",&salario);
    comissao=salario*0.10;
    novo_salario=salario+comissao;
    printf("O valor da comissão é %.2f\nO novo salario é: %.2f",comissao,novo_salario);
    return 0;
}