#include <stdio.h>
#include <math.h>

int main()
{
    float numero, quad, cubo, r2, r3;
    printf("Numero\n");
    scanf("%f%*c",&numero);
    quad=pow(numero,2);
    printf("Numero ao quadrado: %.0f\n",quad);
    cubo=pow(numero,3);
    printf("Numero ao cubo:%.0f\n",cubo);
    r2=sqrt(numero);
    printf("Raiz quadrada:%.0f\n",r2);
    r3=cbrt(numero);
    printf("Raiz cubica:%.0f\n",r3);
    return 0;
}
