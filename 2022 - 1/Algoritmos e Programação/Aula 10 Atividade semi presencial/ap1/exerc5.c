#include <stdio.h>
#include <windows.h>


int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int num1, num2;
    printf("Insira o primeiro número inteiro: ");
    scanf("%d%*c",&num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d%*c",&num2);
    if(num1%2 == 0){
        printf("O número %d que é múltiplo de 2\n",num1);
    }else{
        printf("O número %d não é múltiplo de 2\n",num2);
    }
    if(num2%2 == 0){
        printf("O número %d é múltiplo de 2\n",num2);
    }else{
        printf("O número %d não é multiplo de 2\n",num2);
    }
}