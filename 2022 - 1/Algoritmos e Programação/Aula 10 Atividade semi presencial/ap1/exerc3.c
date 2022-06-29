#include <stdio.h>
#include <windows.h>


int main(){
    float num1, num2, dife;
    printf("Insira o primeiro número:\n ");
    scanf("%f%*c",&num1);
    printf("Digite o segundo número:\n ");
    scanf("%f%*c",&num2);
    if(num1>num2){
        dife=num1-num2;
        printf("A diferença é %.2f",dife);
    }else if(num2>num1){
        dife=num2-num1;
        printf("A diferenca é %.2f",dife);
    }else{
        printf("Os números sao iguais");
    }
    return 0;
}