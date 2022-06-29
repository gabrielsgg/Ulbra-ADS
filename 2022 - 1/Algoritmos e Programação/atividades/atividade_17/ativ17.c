#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int senha;
    printf("Digite a senha de quatro digitos:\nSenha:");
    scanf("%d%*c",&senha);
    if (senha==4531){
        printf("Acesso permitido.");
    }else{
        printf("Acesso negado.");
    }    
    return 0;
}