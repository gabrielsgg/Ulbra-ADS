#include <stdio.h>

int main()
{
    float sal, perc, aumento, novosal;
    printf("Salario atual\n");
    scanf("%f%*c",&sal);
    printf("Percentual reajuste\n");
    scanf("%f%*c",&perc);
    aumento=sal*perc/100;
    printf("Aumento: %.2f\n", aumento);
    novosal=sal+aumento;
    printf("Novo salario: %.2f\n",novosal);
    return 0;
}
