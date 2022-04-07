/*
Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
com validações.
*/
#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int num1, num2, div_num;
    printf("Digite o primeiro número\n");
    scanf("%d%*c", &num1);
    printf("Digite o segundo número\n");
    scanf("%d%*c", &num2);

    if (num2 > 0)
    {   
        printf("Resultado da divisão:%.d", num1/num2);
    }

    else {
        printf("O segundo numero deve ser maio que 0.");
    }
    return 0;
}
