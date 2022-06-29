/* Interprete o problema a seguir:

Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada metro quadrado, deve-se usar 18W de potência. Faça um programa que receba às duas dimensões de um cômodo (em metros), calcule e apresente a sua área e a potência de iluminação que deverá ser utilizada.

Após analisarmos o problema, pode-se afirmar que a assertiva que melhor descreve a interpretação do programa proposto é: */

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float lado1, lado2, area, qtd_wats;
    float m2=18;

    printf("Digite a primeira metragem");
    scanf("%f%*c",&lado1);
    printf("Digite a segunda metragem");
    scanf("%f%*c",&lado2);
    area=lado1*lado2;
    qtd_wats=area*18;
    printf("O valor total da área é: %.2f\nPotência de iluminção necessária: %.2f",area,qtd_wats);
    return 0;
}