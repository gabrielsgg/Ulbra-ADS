
#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int soma, numeros;
    soma=0;
    for (int i=0; i<10; i++){
        printf("Digite um numero: %d\n",i+1);
        scanf("%d%*c",&numeros);
        soma=numeros+soma;
    }
    printf("A soma é: %d",soma);
    return 0;
}