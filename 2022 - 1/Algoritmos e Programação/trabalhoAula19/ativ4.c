#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,numero,codigo;
    float arr[5];
    for(i=0;i<5;i++){
        printf("Digite o número %d:\n",i+1);
        scanf("%f%*c",&arr[i]);
    }
    printf("Digite um código para executar o programa.\n");

    switch (codigo){
    case 0:
        printf("programa encerrado");
        break;
    case 1:
        for (i = 0; i < 5; i++){
            printf("A ordem do vetor é: %.2f\n",arr[i]);
        }
        break;
    case 2:
        for (i = 4; i >=0; i--){
            printf("A ordem inversa do vetor é: %.2f\n",arr[i]);
        }  
    default:
        printf("Código inválido.\nDigite novamente.");
        break;
    }

    return 0;
}


