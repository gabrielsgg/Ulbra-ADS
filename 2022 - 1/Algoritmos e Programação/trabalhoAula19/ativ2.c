#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[10],i, numero;
    for(i=0;i<10;i++){
        arr[i]=rand() % 100;
    }    
    printf("\nDigite um número:\n");
    scanf("%d%*c",&numero);
    for(i=0;i<10;i++){
        if (arr[i]==numero){
            printf(" O número %d informado é igual a um número no vetor e está na posição %d\n",arr[i], i);
        }        
    }
    return 0;
}
