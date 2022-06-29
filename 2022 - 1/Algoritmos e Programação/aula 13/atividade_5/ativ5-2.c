
#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int num, soma;
    int i;
    i=1;
    soma=0;
    printf("Digite um número:\n");
    scanf("%d%*c",&num);
    do{
        soma+=i;
        i++;
    } while (i<=num);
    printf("O valor da Soma é: %d",soma);
    return 0;
}