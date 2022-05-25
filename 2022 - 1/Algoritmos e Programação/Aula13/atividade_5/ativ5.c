
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
    while (i<=num){
        soma+=i;
        i++;
    }
    printf("O valor da soma é: %d",soma);
    return 0;
}