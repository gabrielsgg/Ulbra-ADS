
#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float num1, num2, num3, num4;
    printf("Digite três números em ordem crescente:\n");
    scanf("%f%*c",&num1);
    scanf("%f%*c",&num2);
    scanf("%f%*c",&num3);
    printf("Digite um numero (fora de ordem)\n");
    scanf("%f%*c",&num4);
    if (num4 > num3){
        printf("A ordem descrescente é: %.2f %.2f %.2f %.2f", num4, num3, num2, num1);
    }else if(num4 > num2 && num4 < num3){
        printf("A ordem descrescente é: %.2f %.2f %.2f %.2f", num3, num4, num2, num1);       
    }else if(num4 > num1 && num4 < num2){
        printf("A ordem descrescente é: %.2f %.2f %.2f %.2f", num3, num2, num4, num1);
    }else if(num4 < num1){
        printf("A ordem descrescente é: %.2f %.2f %.2f %.2f", num3, num2, num1, num4);
    }
    return 0;
}