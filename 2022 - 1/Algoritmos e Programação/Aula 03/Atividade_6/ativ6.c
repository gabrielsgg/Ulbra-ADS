#include <stdio.h>

int main()
{
    float sal, salreceber, grat, imp;
    printf("Salario Base\n");
    scanf("%f%*c",&sal);
    grat=sal*5/100;
    imp=sal*7/100;
    salreceber=sal+grat-imp;
    printf("gratificacao: %.2f\n",grat);
    printf("Imposto salario base: %.2f\n",imp); 
    printf("Salario a receber: %.2f\n", salreceber);
    return 0;
}
