#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float n1,n2,div;
    char opcao;

    do{
        printf("Digite o numero 1:\n");
        scanf("%f%*c",&n1);
        do{
            printf("Digite o numero 2:\n");
            scanf("%f%*c",&n2);
            if (n2==0){
                printf("O numero digitado é inválido\n");
            }
            
        } while (n2==0);
    div=n1/n2;
    printf("A divisão de %.0f / %.0f é %.2f \n", n1, n2, div);
    printf("Deseja efetuar novo calculo? [s/n]");
    scanf("%c%*c",&opcao);
    } while ((opcao=='s')||(opcao=='S'));
    return 0;
}