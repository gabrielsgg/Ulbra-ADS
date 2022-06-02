#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int i, senha, senhaValida = 1234;
    i=1;
    printf("Digite sua senha:\n ");
    scanf("%d", &senha);

    while(senha != senhaValida){
        printf("Senha invalida! Acesso negado\nDigite sua senha:\n ");
        scanf("%d", &senha);
        i++;
    }

    printf("Acesso permitido!\nVoce digitou a senha errada %d vezes.",i-1);
    return 0;
}
