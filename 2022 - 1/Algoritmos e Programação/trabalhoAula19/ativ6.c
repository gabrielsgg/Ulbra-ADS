// 6-Faça um programa para ler 10 números DIFERENTES a serem 
// armazenados em um vetor. Os dados deverão ser armazenados no 
// vetor na ordem que forem sendo lidos, sendo que caso o usuário
// digite um número que já foi digitado anteriormente, o programa
// devera pedir para ele digitar outro número.
// Note que cada valor digitado pelo usuário deve ser pesquisado
// no vetor, verificando se ele existe entre os números que já
// foram  fornecidos. Exibir na tela o vetor final digitado.



#include <stdio.h>
#include <stdlib.h>
int main(){
    int arr[10],i,j;
    
    for ( i = 0; i < 10; i++){
        printf("Digite o número %d:\n",i+1);
        scanf("%d%*c",&arr[i]);
        for(j=0;j<i;j++){
            if (arr[i]==arr[j]){
                printf("Digite outro numero, valor já está salvo no vetor.\n");
                j--;
                i--;
                continue;
            }
            
        }
    }

    for ( i = 0; i < 5; i++){
        printf("Vetor completo: %d\n",arr[i]);

    }

    
    return 0;
}







