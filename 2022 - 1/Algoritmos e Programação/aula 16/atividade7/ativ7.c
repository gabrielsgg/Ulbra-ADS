#include <stdio.h>
#include <windows.h>


int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int vetor[3], total=3, maior, posMaior;
    int i;
        
    for(i=0; i<total; i++){
        printf("Digite o valor do vetor %d:\n", i);
        scanf("%d%*c",&vetor[i]);        
    }
    
    maior=vetor[0];
    posMaior=0;
    for (i=0;i<total;i++){
        if (vetor[i]>maior){
            maior=vetor[i];
            posMaior=i;
        }
    }
    
    for (i=0;i<total;i++){
        printf("Vetor %d:\n%d\n",i, vetor[i]);
    }
    printf("O número maior é: %d\n",maior);
    printf("O número maior está na posição %d",posMaior);

    return 0;
}
