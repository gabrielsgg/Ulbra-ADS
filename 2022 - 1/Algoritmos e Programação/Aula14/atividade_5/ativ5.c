#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int num1,num2;
    
    do{
        printf("Digite o primeiro número:\n");
        scanf("%d%*c",&num1);
        printf("Digite o segundo número:\n");
        scanf("%d%*c",&num2);
        if (num1==num2){
        break;
        }else{
        if (num1>num2){
        printf("Os números digitados estão em ordem decrescente\n");
        }else if (num2>num1){
        printf("Os números digitados estão em ordem crescente\n");
        }
        }
    } while (num1!=num2);
    printf("Os numeros digitados são iguais.");
    
    
    return 0;
}