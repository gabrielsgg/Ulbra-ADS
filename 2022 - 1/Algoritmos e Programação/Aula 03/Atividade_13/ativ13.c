#include <stdio.h>
#include <math.h>

int main()
{
    float pes, polegadas, jardas, milhas;
    printf("digite o valor em PES\n");
    scanf("%f%*c",&pes);
    polegadas=pes*12;
    jardas=pes/3;
    milhas=jardas/1760;
    printf("Resultado em polegas:%.0f\n",polegadas);
    printf("Resultado jardas:%.0f\n",jardas);
    printf("Resultado em milhas:%.0f\n",milhas);
    return 0;
}
