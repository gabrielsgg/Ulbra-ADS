#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float num1, num2;
    printf("Insira o primeiro número:\n ");
    scanf("%f%*c",&num1);
    printf("Digite o segundo número:\n ");
    scanf("%f%*c",&num2);
    if(num1>num2){
        printf("o número maior é %.2f",num1);
    }else if(num2>num1){
        printf("o número maior é %.2f",num2);
    }else{
        printf("Os números sao iguais");
    }
    return 0;
}