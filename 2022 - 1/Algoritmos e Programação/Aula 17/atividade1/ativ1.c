
#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int vetor[6],i,pares,impar;
    pares=0;
    impar=0; 
    for(i=0; i<6; i++){
        printf("Digite o valor do vetor %d:\n", i+1);
        scanf("%d%*c",&vetor[i]);
    }

    for(i=0;i<6;i++){
        if(vetor[i]%2==0){
            pares=pares+1;
            printf("Os números pares são:\n%d\n",vetor[i]);
        }
    }
    
    for(i=0;i<6;i++){
        if(vetor[i]%2!=0){
            impar=impar+1;
            printf("Os números ímpares são:\n%d\n",vetor[i]);
        }
    }
    printf("Os vetores possuem %d números pares.\n",pares);
    printf("Os vetores possuem %d números ímpares.\n",impar);

    return 0;
}