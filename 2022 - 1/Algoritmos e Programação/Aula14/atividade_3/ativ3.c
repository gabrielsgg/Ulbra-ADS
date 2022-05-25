#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int n;
    do{
        printf("Informe o numero para ser testado:\n");
        scanf("%d%*c",&n);
        
        if (n<=0){
           break;
        }else{
            if (n%2==0){
            printf("O valor numero digitado é PAR!\n");
            }else{
            printf("O valor digitado é IMPAR!\n");
            }
        }
        
    } while (n!=0);
    printf("Execute o programa novamente.");
    return 0;
}