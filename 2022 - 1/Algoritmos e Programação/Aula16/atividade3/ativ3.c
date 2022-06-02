#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int numero[10],resultado[10];
    int i;
    int total=10;

    for (i=0;i<total;i++){
        printf("Digite o número %d:\n",i+1);
        scanf("%d%*c",&numero[i]);
    }

    for (i=0;i<total;i++){
        resultado[i]=pow(numero[i],2);
        printf("O resultado de cada potência é:\n%d\n",resultado[i]);
    }

    return 0;
}
