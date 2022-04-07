#include <stdio.h>

int main()
{
    float base, altura, area;
    printf("Base\n");
    scanf("%f%*c",&base);
    printf("Altura\n");
    scanf("%f%*c",&altura);
    area=(base*altura)/2;
    printf("Altura Triangulo: %.2f\n",area);
    return 0;
}
