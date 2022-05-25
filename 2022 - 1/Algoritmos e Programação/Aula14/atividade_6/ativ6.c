#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int senha, senhaValida = 1234;

    printf("Digite sua senha: ");
    scanf("%d", &senha);

    while(senha != senhaValida){
        printf("Senha invalida!\n\nDigite sua senha: ");
        scanf("%d", &senha);
    }

    printf("Acesso permitido!\n");
    return 0;
}