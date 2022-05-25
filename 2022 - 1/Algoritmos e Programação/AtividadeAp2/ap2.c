
#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int idade;
    printf("Lembrando que o voto é facultativo para analfabetos.\n");
    printf("Digite sua idade:\n");
    scanf("%d%*c",&idade);
    if (idade>18 && idade<70){
        printf("Você é maior de idade!\nO voto é obrigatório!!");
    }else if (idade>=16 && idade<18){
        printf("Voce é menor de idade.\nO voto é facultativo");
    }else if (idade>=70){
        printf("Você é maior de idade!\nO voto é facultativo");
    }else{
        printf("Você é menor de idade.\nO Voto não é permitido para menores de 16 anos.");
    }
    return 0;
}