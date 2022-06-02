
#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int i;
    int TAM=15, div=15;
    float notas[15],media,soma;
    media=0;
    soma=0;
    i=0;
    while (i<TAM){
        printf("Digite a nota do aluno %d:\n",i+1);
        scanf("%f%*c",&notas[i]);
        if(notas[i]>=0 && notas[i]<=10){
            soma=soma+notas[i];
             i++;
        }else{
            printf("Notá inválida.\n(Digite a nota de 1 a 10)\n");  
        }
    }

    media=soma/div;
    printf("Soma das notas da Turma:\n%.2f\n",soma);
    printf("A média da turma é:\n%.2f",media);
    
    return 0;
}