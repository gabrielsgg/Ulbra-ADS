#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float salario, n_salario;
    printf("Digite o valor do salário:\nR$ ");
    scanf("%f%*c",&salario);

    if(salario<=300){
        n_salario=(salario*0.50)+salario;
        printf("Novo salario de acordo com a tabela:\nR$ %.2f", n_salario);
    }else if(salario>300 && salario<=500){
        n_salario=(salario*0.40)+salario;
        printf("Novo salario de acordo com a tabela:\nR$ %.2f", n_salario);
    }else if(salario>500 && salario<=700){
        n_salario=(salario*0.30)+salario;
        printf("Novo salario de acordo com a tabela:\nR$ %.2f", n_salario);
    }else if(salario>700 && salario<=800){
        n_salario=(salario*0.20)+salario;
        printf("Novo salario de acordo com a tabela:\nR$ %.2f", n_salario);
    }else if(salario>800 && salario<=1000){
        n_salario=(salario*0.10)+salario;
        printf("Novo salario de acordo com a tabela:\nR$ %.2f", n_salario);
    }else{
        n_salario=(salario*0.05)+salario;
        printf("Novo salario de acordo com a tabela:\nR$ %.2f", n_salario);
    }        
    return 0;
}