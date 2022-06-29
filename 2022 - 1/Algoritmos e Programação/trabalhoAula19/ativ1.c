#include <stdio.h>
#include <string.h>

int main()
{
    int arr[10], i;
    int contMenores = 0, contReferencia = 0, repet = 0, referencia;

    for(i=0;i<10;i++){
        printf("Digite o numero %d:\n",i+1);
        scanf("%d%*c",&arr[i]);
    }
    printf("Digite um número de referência:\n");
    scanf("%d%*c",&referencia);

    for(i=0;i<10;i++){
        if (arr[i]>referencia){
            printf("Os números maiores que a referencia são: %d\n",arr[i]);
        }else if(arr[i]<referencia){
            contMenores++;

        }else{
            contReferencia++;
        }   
    }
    printf("Entre os números informados, %d são menores que a referencia.\n",contMenores);
    printf("A referencia aparece %d vezes no vetor.\n",contReferencia);
    return 0;
}
