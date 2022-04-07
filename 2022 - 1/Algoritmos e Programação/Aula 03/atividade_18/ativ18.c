#include <stdio.h>
#include <math.h>

int main()
{
    float peso_saco, racao_gato1, racao_gato2, total_final;
    printf("Peso saco de racao\n");
    scanf("%f%*c",&peso_saco);
    printf("Racao gato 1\n");
    scanf("%f%*c",&racao_gato1);
    printf("Racao gato 2\n");
    scanf("%f%*c",&racao_gato2);
    racao_gato1 = racao_gato1 / 100;
    racao_gato2 = racao_gato2 / 100;
    total_final = peso_saco - 5 * (racao_gato1 + racao_gato2);
    printf("Sobra de racao em 05 dias:%.2f\n",total_final);
    return 0;
}
