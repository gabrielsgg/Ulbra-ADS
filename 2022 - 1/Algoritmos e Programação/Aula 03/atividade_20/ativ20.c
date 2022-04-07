#include <stdio.h>
#include <math.h>


int main()
{
    float ang, alt, escada, radiano;
    float pi = 3.14;
    printf("Medida angulo\n");
    scanf("%f%*c", &ang);
    printf("Medida altura\n");
    scanf("%f%*c", &alt);
    radiano = ang * pi /180;
    escada = alt / radiano;
    printf("Medida da escada:%.0f\n,",escada);
    return 0;
}
