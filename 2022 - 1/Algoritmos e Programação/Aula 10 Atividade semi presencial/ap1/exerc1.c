#include <stdio.h>
#include <windows.h>

int main(){
    float num1, num2, total;
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    printf("Insira o primeiro número:\n ");
    scanf("%f%*c",&num1);
    printf("Insira o segundo número:\n ");
    scanf("%f%*c",&num2);
    if(num1>=num2){
        total=num1+100;
        printf("O total e %.2f.",total);
    }else{
        total=num2+100;
        printf("O total e %.2f.",total);
    }
    return 0;

}