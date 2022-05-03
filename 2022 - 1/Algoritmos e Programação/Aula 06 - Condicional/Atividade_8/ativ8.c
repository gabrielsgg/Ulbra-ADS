#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float num1, num2, soma, raiz, op;
    printf("MENU\n");
    printf("1 - Somar dois números\n");
    printf("2 - Raiz quadrada de um número\n");
    printf("Digite sua opção:\n");
    scanf("%f%*c",&op);
    if(op==1){
        printf("Digite um valor para o primeiro número:\n");
        scanf("%f%*c",&num1);
        printf("Digite um valor para o segundo número:\n");
        scanf("%f%*c",&num2);
        soma = num1 + num2;
        printf("A soma de %.2f e %.2f é: %.2f", num1, num2, soma);
    }else if(op==2){
        printf("Digite um valor:\n");
        scanf("%f%*c",&num1);
        raiz=sqrt(num1);
        printf("A raiz quadrada de %.2f é: %.2f\n", num1, raiz);
    }else{
        printf("opção inválida.");
    }    
    return 0;
}