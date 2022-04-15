/*
Faça um programa que calcule e mostre a área de um trapézio.
Sabe-se que: A = ((base maior + base menor) * altura)/2
*/
#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float base_maior, base_menor, altura, a_trapezio;
    printf("Digite o tamanho da base menor\n");
    scanf("%f%*c",& base_menor);
    printf("Digite o tamanho da base maior\n");
    scanf("%f%*c",& base_maior);
    printf("Digite o tamanho da alura do trapézio\n");
    scanf("%f%*c",& altura);
    a_trapezio = ((base_maior + base_menor) * altura)/2;
    printf("A área do trapézio é :%.2f\n",a_trapezio);
    return 0;
}