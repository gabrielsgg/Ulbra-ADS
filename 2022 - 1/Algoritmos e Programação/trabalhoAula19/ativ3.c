#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[10],i, j, numero;

    for(i=0;i<10;i++){
        printf("Digite o número %d:\n",i+1);
        scanf("%d%*c",&arr[i]);
    }

    for ( i = 0; i < 10; i++){
        for (j= i+1; j<10; j++){
            if (arr[i]==arr[j]){
                printf("Os números iguais são:\n%d\n",arr[i]);
                i++;
                break;
            }
            
        }

    }
    
    return 0;
}