#include <stdio.h>
#include <stdlib.h>
int main(){
    int numerosA[10],numerosB[10],arrC[10];
    for(int i = 0;i < 10; i++){
        printf("Digite o numero %d para o vetor A:\n",i+1);
        scanf("%d%*c",&numerosA[i]);
        printf("Digite o numero %d para o vetor B:\n",i+1);
        scanf("%d%*c",&numerosB[i]);
    }
    for(int i = 0;i < 10; i++){
        arrC[i] = numerosA[i] - numerosB[i];
        printf("A subtração dos vetores na posição %d é: %d\n",i+1,arrC[i]);
    } 
    
    return 0;
}


