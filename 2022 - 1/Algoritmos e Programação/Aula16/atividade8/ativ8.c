
#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int valores[6],i;

    for (i=0;i<6;i++){
        printf("Digite o valor %d:\n",i+1);
        scanf("%d%*c",&valores[i]);
    }

    for (i=5;i>=0;i--){
        printf("valor digitado %d: %d\n",i+1, valores[i]);
    }
    return 0;
}