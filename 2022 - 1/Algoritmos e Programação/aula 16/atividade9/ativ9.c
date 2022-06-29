
#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int vetor[6],i;
    i=0;
    while (i<6){
        printf("Digite um número par %d:\n",i+1);
        scanf("%d%*c",&vetor[i]);
        if(vetor[i]%2==0){
            i++;
        }else{
            printf("Número Inválido.\n(IMPAR)\n");  
        }
    }
    for (i=5;i>=0;i--){
        printf("Numero %d, PAR digitado: %d\n",i+1, vetor[i]);
    }
    
    return 0;
}