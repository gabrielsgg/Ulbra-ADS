#include <stdio.h>
#include <windows.h>


int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int idade;
    printf("Insira a sua idade: ");
    scanf("%d%*c",&idade);
    if(idade>=18){
        printf("Voce é maior de idade ");
    }else{
        printf("Voce é menor de idade ");
    }
    return 0;
}