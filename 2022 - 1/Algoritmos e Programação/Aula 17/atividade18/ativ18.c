#include <stdio.h>
#include <windows.h>


int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int vetor[15], total=15, maior, menor, posMaior, posMenor;
    int i;
    posMaior=0;
    posMenor=0;
    for(i=0; i<total; i++){
        printf("Digite o valor do vetor %d:\n", i);
        scanf("%d%*c",&vetor[i]);        
    }

    maior=vetor[0];
    for (i=0;i<total;i++){
        if (vetor[i]>maior){
            maior=vetor[i];
            posMaior=i;
        }
    }

    menor=vetor[0];
    for(i=0;i<total;i++){
        if(vetor[i]<=menor){
            menor=vetor[i];
            posMenor=i;
    }
    }

    printf("O número maior é: %d\nEstá na posição %d\n",maior,posMaior);
    printf("O número menor é: %d\nEstá na posição %d\n",menor,posMenor);
    return 0;
}