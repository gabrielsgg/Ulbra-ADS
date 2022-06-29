#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int d1, m1, a1, d2, m2, a2;
    printf("Digite a primeira data\n");
    printf("Dia (dd): ");
    scanf("%d%*c",&d1);
    printf("Mês (mm): ");
    scanf("%d%*c",&m1);
    printf("Ano (aaaa): ");
    scanf("%d%*c",&a1);
    printf("Digite a segunda data\n");
    printf("Dia (dd): ");
    scanf("%d%*c",&d2);
    printf("Mês (mm): ");
    scanf("%d%*c",&m2);
    printf("Ano (aaaa): ");
    scanf("%d%*c",&a2);
     if (a1>a2){
        printf("A maior data é: %d/%d/%d", d1, m1, a1);
    }else if (a2>a1){
        printf("A maior data é: %d/%d/%d", d2, m2, a2);
    }else if (m1>m2){
        printf("A maior data é: %d/%d/%d", d1, m1, a1);
    }else if (m2>m1){
        printf("A maior data é: %d/%d/%d", d2, m2, a2);
    }else if (d1>d2){
        printf("A maior data é: %d/%d/%d", d1, m1, a1);
    }else if (d2>d1){
        printf("A maior data é: %d/%d/%d", d2, m2, a2);
    }else{
        printf("As datas sao iguais");
    }   
    return 0;
}