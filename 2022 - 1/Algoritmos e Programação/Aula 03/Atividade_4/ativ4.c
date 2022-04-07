#include <stdio.h>

int main()
{
    float sal, novosal;
    printf("Digite o salario atual\n");
    scanf("%f%*c",&sal);
    novosal=sal+sal*25/100;
    printf("Novo valor de salario: %.2f", novosal);
    return 0;
}
