

#include <stdio.h>
#include <string.h>

int main() {
    int i, numVogais=0, menu, numLetras=0;
    char palavra[10];

    printf("Digite uma palavra.\n");
    scanf("%s%*c", palavra);

    do {
        
        printf("Escolha uma opção do menu:\n1. Saber a quantidade de vogais da palavra digitada\n2.Saber a quantidade de letras da palavra digitada\n3.Encerrar o programa\n");
        scanf("%d%*c", &menu);

        switch (menu) {
            case 1:
                for (i = 0; i < strlen(palavra); i++){
                    if (palavra[i]== 'A' || palavra[i]== 'a' ||
                        palavra[i]== 'E' || palavra[i]== 'e' ||
                        palavra[i]== 'I' || palavra[i]== 'i' ||
                        palavra[i]== 'O' || palavra[i]== 'o' ||
                        palavra[i]== 'U' || palavra[i]== 'u'){
                        numVogais++;
                    }
                }
                printf("A palavra digita possui %d vogais\n",numVogais);
                numVogais=0;
                break;
            case 2:
                numLetras=strlen(palavra);
                printf("Essa palavra tem %d letras\n",numLetras);
                break;
            default:
                printf("Digite uma entrada válida\n");
                break;
        }

    } while (menu != 3);
}





