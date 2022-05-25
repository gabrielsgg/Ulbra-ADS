/* Faça um programa para ler 10 valores inteiros. Para cada valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR.. */

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int i;
    int num;
    i=1;
    for (i=1;i<=10;i++){
        printf("Digite o número %d: ",i);
        scanf("%d%*c",&num);
            if(num%2==0){
            printf("Este número é par.\n");
        }else{
            printf("Este número é ímpar.\n");
        }
    }
    return 0;
}