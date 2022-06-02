#include <stdio.h>
#include <windows.h>


int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int vetor[8], x, y, a, b, soma;
    soma=0;
    for(int i=0; i<8; i++){
        printf("Digite o valor do vetor %d:\n", i);
        scanf("%d%*c",&vetor[i]);
    }

    printf("Digite o número da 1ª posição (X):");
    scanf("%d%*c",&x);
    printf("Digite o número da 2ª posição (Y):");
    scanf("%d%*c",&y);

    a=vetor[x];
    b=vetor[y];
    
    soma=a+b;
    printf("Resultado soma:\n%d",soma);

    return 0;
}
