#include <stdio.h>

int main()
{
    float sal, salreceber, imp;
    printf("Salario base\n");
    scanf("%f%*c",&sal);
    imp=sal*10/100;
    salreceber=sal+50-imp;
    printf("Imposto a ser descontado: %.2f\n",imp);
    printf("Salario a receber: %.2f\n",salreceber);
    return 0;
}
