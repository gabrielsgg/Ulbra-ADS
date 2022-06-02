#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int vetor[10], total=10, pares;
    int i;
    pares=0;
    
    for(i=0; i<total; i++){
        printf("Digite o valor do vetor %d:\n", i);
        scanf("%d%*c",&vetor[i]);
        
    }

    for(i=0;i<total;i++){
        if (vetor[i]%2==0){
            pares=pares+1;
        }
    }
    printf("Os vetores possuem %d números pares.",pares);

    return 0;
}
