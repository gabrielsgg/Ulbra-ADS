#include <stdio.h>

int main()
{
    float dep, taxa, rend, total;
    printf("Valor deposito\n");
    scanf("%f%*c",&dep);
    printf("Taxa Juros\n");
    scanf("%f%*c",&taxa);
    rend=dep*taxa/100;
    total=dep+rend;
    printf("Valor rendimento: %.2f\n",rend);
    printf("Total: %.2f\n", total);
    return 0;
}
