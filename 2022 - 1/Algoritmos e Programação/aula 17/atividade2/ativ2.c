#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int vetor[7], i;

    for(i=0; i<6; i++){
        printf("Digite o valor do vetor %d:\n", i+1);
        scanf("%d%*c",&vetor[i]);
    }
    
    for (i = 0; i < 6; i++){
        if(vetor[i]%2==0){
            printf("Os números múltiplos de 2 é:\n%d\n",vetor[i]);
        }
        
    }

    for(i=0;i<6;i++){
        if(vetor[i]%3==0){
            printf("Os números múltiplos de 3 é:\n%d\n",vetor[i]);
        }
    }

    for (i = 0; i < 6; i++){
        if(vetor[i]%2==0 && vetor[i]%3==0){
            printf("Os números múltiplos de 2 e 3 é:\n%d\n",vetor[i]);
        }
    }
    
    return 0;
}