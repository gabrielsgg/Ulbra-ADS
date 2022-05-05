#include <stdio.h>
#include <windows.h>
#include <math.h>
int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float n1, n2, n3, potenc, r_quad, r_quad2, r_quad3, r_cub1, r_cub2, r_cub3;
    int op;
    printf("Digite o primeiro número.\n");
    scanf("%f%*c",&n1);
    printf("Digite o segundo número.\n");
    scanf("%f%*c",&n2);
    printf("Digite o terceiro número.\n");
    scanf("%f%*c",&n3);
    
    printf("Selecione a opção desejada:\n 1- O Primeiro número elevado ao segundo número.\n 2- Raiz quadrada de cada um dos números.\n 3- Raiz cúbica de cada um dos números.\n");
    scanf("%d%*c",&op);

    if(op==1){
        potenc=pow(n1,n2);
        printf("O resultado do primeiro número elevado ao segundo é: %.2f \n", potenc);
    }else if(op==2){
        r_quad=sqrt(n1);
        r_quad2=sqrt(n2);
        r_quad3=sqrt(n3);
        printf("A raiz quadrada do primeiro número é: %.0f \n A raiz quadrada do segundo número é: %.0f \n A raiz quadra do terceiro número é: %.0f \n", r_quad, r_quad2, r_quad3);
    }else if(op==3){
        r_cub1=pow(n1,1.0/3.0);
        r_cub2=pow(n2,1.0/3.0);
        r_cub3=pow(n3,1.0/3.0);
        printf("A raiz cúbica do primeiro número é: %.2f \n A raiz cúbica do segundo número é: %.2f \n A raiz cúbica do terceiro número é: %.2f \n", r_cub1, r_cub2, r_cub3);
    }else{
        printf("Opção inválida");
    }    
    return 0;
}