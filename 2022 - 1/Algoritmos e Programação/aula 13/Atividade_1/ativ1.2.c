
#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int soma, numeros;
    soma=0;
    int i=0;
    while (i<10){
        printf("Digite um numero: %d\n",i+1);
        scanf("%d%*c",&numeros);
        soma=numeros+soma;
        i++;
    }
    printf("A soma é: %d",soma);
    return 0;
}