#include <stdio.h>
#include <windows.h>


int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int vetor[10], total=10, maior, menor;
    int i;
        
    for(i=0; i<total; i++){
        printf("Digite o valor do vetor %d:\n", i);
        scanf("%d%*c",&vetor[i]);        
    }

    maior=vetor[0];
    for (i=0;i<total;i++){
        if (vetor[i]>maior){
            maior=vetor[i];
        }
    }

    menor=vetor[0];
    for(i=0;i<total;i++){
        if(vetor[i]<=menor){
            menor=vetor[i];
    }
    }

    printf("O número maior é: %d\n",maior);
    printf("O número menor é: %d",menor);
    return 0;
}
