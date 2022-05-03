#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float num1, num2, num3;
    printf("Digite o primeiro numero\n");
    scanf("%f%*c",&num1);
    printf("Digite o segundo numero\n");
    scanf("%f%*c",&num2);
    printf("Digite o terceiro numero\n");
    scanf("%f%*c",&num3);
    if(num1 < num2 && num1 < num3){
        if (num2 < num3)
        printf(" A ordem crescente é: %.2f %.2f %.2f\n", num1, num2, num3);
        else
        printf("A ordem crescente é: %.2f %.2f %.2f\n", num1, num3, num2);
    }if(num2 < num1 && num2 < num3){
        if(num1 < num3)
        printf("A ordem crescente é: %.2f %.2f %.2f\n",num2, num1, num3);
        else
        printf("A ordem crescente é: %.2f %.2f %.2f\n", num2, num3, num1);
    }if(num3 < num1 && num3 < num2){
        if(num1 < num2)
        printf("A ordem crescente é: %.2f %.2f %.2f\n", num3, num1, num2);
        else
        printf("A oedem crescente é: %.2f %.2f %.2f\n", num3, num2, num1);
    }
    return 0;
}