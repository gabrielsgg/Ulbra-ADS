#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float salario, novo_salario;
    printf("Digite o valor do salário do funcionário:R$ ");
    scanf("%f%*c",&salario);
    if(salario<500){
        novo_salario=(salario*30/100)+salario;
        printf("Novo salario com o reajuste: R$ %.2f \n",novo_salario);
    }else{
        printf("Salario sem reajuste \n");
    }     
    return 0;
}