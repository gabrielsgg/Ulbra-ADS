#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int num1, num2, num3, num4;
    printf("digite o primeiro número: ");
    scanf("%d%*c",&num1);
    printf("digite o segundo número: ");
    scanf("%d%*c",&num2);
    printf("digite o terceiro número: ");
    scanf("%d%*c",&num3);
    printf("digite o quarto número: ");
    scanf("%d%*c",&num4);
    if((num1%2==0)&&(num1%3==0)){
        printf("o primeiro número é multiplo de 2 e 3\n");
    }else{
       printf("o primeiro numero não é multiplo de 2 e 3\n"); 
    }
    if((num2%2==0)&&(num2%3==0)){
        printf("o segundo número é multiplo de 2 e 3\n");
    }else{
       printf("o segundo número não é multiplo de 2 e 3\n"); 
    }
    if((num3%2==0)&&(num3%3==0)){
        printf("o terceiro número é múltiplo de 2 e 3\n");
    }else{
       printf("o terceiro número não é múltiplo de 2 e 3\n"); 
    }
    if((num4%2==0)&&(num4%3==0)){
        printf("o quarto numero é multiplo de 2 e 3\n");
    }else{
       printf("o quarto número não é multiplo de 2 e 3\n"); 
    }
    return 0;

}