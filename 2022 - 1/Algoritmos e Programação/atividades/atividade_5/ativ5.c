#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(){
    UINT CPAGE_UTF8 = 65001; 
    SetConsoleOutputCP(CPAGE_UTF8); 
    float n1, n2, op;
    float media, dif, prod, div;
    printf("digite o primeiro número:\n");
    scanf("%f%*c", &n1);
    printf("digite o segundo número:\n");
    scanf("%f%*c", &n2);
    printf("Escolha uma das seguintes opções:\n 1- Médias entre os números.\n 2- Diferença do maior pelo menor número digitado.\n 3- Produto entre os números digitados.\n 4- Divisão entre os números digitados.\n");
    scanf("%f%*c", &op);

    if(op == 1){ /* media numeros */
        media = n1 / n2;
        printf("O valor da média entre os valores digitados é:%.2f \n", media);
    }else if(op == 2){ /* diferença numeros */
        if (n1 > n2){
            dif = n1 - n2;
            printf("A diferença entre os números é:%.0f", dif);
        }else if (n2 > n1){
            dif = n2 - n1;
            printf("A diferença entre os números é:%.0f", dif);
        }
    }else if(op == 3){ /* Produto entre os numeros */
            prod = n1 * n2;
            printf("O produto dos números é: %.2f \n", prod);
    }else if(op == 4 && n2 > 0){ /* divsão dos numeros */
        div = n1 / n2;
        printf("A divisão entre os números é: %.2f \n", div);
    }else{
        printf("Dados incorretos, execute o programa novamente.");
    }
    return 0;
}