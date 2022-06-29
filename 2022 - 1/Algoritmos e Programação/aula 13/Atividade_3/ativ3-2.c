
#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int n1, n2; 
    
    printf("Digite o primeiro número:\n");
    scanf("%d%*c",&n1);
    printf("Digite o segundo número:\n");
    scanf("%d%*c",&n2);

    int i=n1;
    do{
        if (i%2!=0){
            printf("Número impar: %d \n",i);
        }
        i++;
    } while (i<=n2);

    return 0;
  
}