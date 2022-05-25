/* Efetue um programa que leia 5 números. Para cada número fornecido, escrever se ele é NULO, NEGATIVO ou POSITIVO. */

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int i;
    float num;
    i=1;
    for (i=1;i<=5;i++){
        printf("Digite o número %d: ",i);
        scanf("%d%*c",&num);
            if(num==0){
            printf("Este número é Nulo.\n");
        }else if(num>0){
            printf("Este número é positivo.\n");
        }else{
            printf("Este número é Negativo.\n");
        }
    }
    return 0;
}