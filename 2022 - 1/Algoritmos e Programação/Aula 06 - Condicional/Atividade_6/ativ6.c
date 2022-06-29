#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int num, r;
    printf("Digite um número:\n");
    scanf("%d%*c",&num);
    r = num % 2 ;
    if (r==0){
        printf("O numero é par\n");
    }else{
        printf("O numero é ímpar\n");
    }    
    return 0;
}