#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float n1, n2, n3;
    printf("insira o primeiro número: ");
    scanf("%f%*c",&n1);
    printf("insira o segundo número: ");
    scanf("%f%*c",&n2);
    printf("insira o terceiro número: ");
    scanf("%f%*c",&n3);
    if((n1<n2)&&(n2<n3)){
        printf("o número maior é: %.1f",n3);
    }else if((n2<n1)&&(n1<n3)){
        printf("o número maior é: %.1f",n3);
    }else if((n3<n1)&&(n1<n2)){
        printf("o número maior é: %.1f",n2);
    }else if((n1<n3)&&(n3<n2)){
        printf("o número maior é: %.1f",n2);
    }else if((n2<n3)&&(n3<n1)){
        printf("o número maior é: %.1f",n1);
    }else if((n3<n2)&&(n2<n1)){
        printf("o número maior é: %.1f",n1);
    }
    return 0;
}