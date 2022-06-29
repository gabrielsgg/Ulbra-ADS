
#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int vetor[6],i;
    while (vetor[i]<6){
        printf("Digite um número par %d:\n",i);
        scanf("%d%*c",&vetor[i]);
        if(vetor[i]%2==0){
            i++;
        }else{
            printf("Número Inválido.\n(IMPAR)\n");  
        }
    }
    
    return 0;
}