#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float sal_atual, novo_sal;
    printf("Salário atual: R$");
    scanf("%f%*c",&sal_atual);

    if(sal_atual<300){
        /* code */
    }
           
    return 0;
}