#include <stdio.h>
#include <windows.h>


int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float vetor[5], negat;
    int i, total=5,soma;
    soma=0;

    for(i=0;i<total;i++){
        printf("Digite o número %d:\n",i+1);
        scanf("%f%*c",&vetor[i]);
    }
    for(i=0;i<total;i++){
        if(vetor[i]>=0){
            soma=soma+vetor[i];
        }
    } 

    for(i=0;i<total;i++){
        if(vetor[i]<0){
            negat=negat+1;
        }
    }
    printf("A soma dos números positivos é:\n%d\n",soma);
    printf("Entre os números informados possui %.0f negativos",negat);
    
    
    
    


    return 0;
}