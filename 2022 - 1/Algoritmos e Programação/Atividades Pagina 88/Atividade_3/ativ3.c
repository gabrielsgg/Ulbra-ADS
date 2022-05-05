#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float n1, n2;
    printf("Digite o primeiro número:\n");
    scanf("%f%*c",&n1);
    printf("Digite o segundo número:\n");
    scanf("%f%*c",&n2);
    if (n1<n2){
        printf("O menor número é:%.f",n1);
    }else if(n2<n1){
        printf("O menor número é:%.f",n2);
    }else{
        printf("Os numeros são iguais");
    }       
    return 0;
}