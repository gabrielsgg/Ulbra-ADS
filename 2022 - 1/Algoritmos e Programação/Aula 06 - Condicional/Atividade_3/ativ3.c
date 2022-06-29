#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float num1, num2;
    printf("Digite o primeiro número\n");
    scanf("%f%*c",&num1);
    printf("Digite o segundo número\n");
    scanf("%f%*c",&num2);
    if(num1 > num2){
        printf("O maior número é %.2f\n",num1);
    }else if(num2 > num1){
        printf("O maior número é %.2f\n",num2);
    }else{
        printf("Os numeros são iguais\n");
    }
    return 0;
}