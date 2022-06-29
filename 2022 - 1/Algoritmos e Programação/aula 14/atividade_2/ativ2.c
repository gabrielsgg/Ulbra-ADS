#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int n;
    do{
        printf("Digite o valor a ser testado:\n");
        scanf("%d%*c",&n);
        if (n>0){
        printf("O valor digitado é positivo!\n");
        }else if (n<0){
        printf("O valor digitado é negativo!\n");
        }
    } while (n!=0);
    printf("Foi digitado o numero 0, execute o programa novamente.");
    return 0;
}