#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float salario, n_salario35, n_salario15;
    printf("Digite o valor do salário do funcionário:R$ ");
    scanf("%f%*c",&salario);
    if(salario<=300){
        n_salario35=(salario*35/100)+salario;
        printf("Novo salario com o reajuste: R$ %.2f \n",n_salario35);
    }else if(salario>300){
        n_salario15=(salario*15/100)+salario;
        printf("Novo salario com o reajuste: R$ %.2f \n",n_salario15);
    }   
    return 0;
}