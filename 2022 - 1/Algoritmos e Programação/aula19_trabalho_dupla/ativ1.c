#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

int main() {
    int opcao, arr[100], i, maior=0;
    int cont = 0;

    srand(time(NULL));
    for (i = 0; i < 100; i++) {
        arr[i] = rand() % 100;
        cont++;
        if (arr[i] == 99){
            break;
        }
    }
    
    do{
        printf("Digite 1 = Para exibir uma lista os números presentes no vetor, não incluído o 999.\n");
        printf("Digite 2 = Para imprimir o vetor na ordem inversa.\n");
        printf("Digite 3 = Para exibir o maior número\n");
        printf("Digite 4 = Para exibir quantos números foram sorteados.\n");
        printf("Digite 5 = Para encerrar o programa.\n");
        scanf("%d%*c",&opcao);

        switch (opcao){
        case 1:
            for(i=0;i<100;i++){
                printf("%d\n", arr[i]);
            }
            break;
        case 2:
            for(i=cont-1;i>=0;i--){
                printf("Ordem inversa: %d\n",arr[i]);
            }
            break;
        case 3:
            for(i=0;i<cont;i++){
                if(arr[i]>maior){
                    maior=arr[i];
                }
            }
            printf("O maior número é: %d\n",maior);
            break;
        case 4:
            printf("Foram sorteados %d números.\n", cont);
            break;
        
        default:
            printf("Digite uma opção válida.");
            break;
        }
    } while (opcao!=5);


    return 0;
}





