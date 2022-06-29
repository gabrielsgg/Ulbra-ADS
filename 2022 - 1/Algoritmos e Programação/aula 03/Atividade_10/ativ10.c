#include <stdio.h>
#define pi 3.1415
int main()
{
    float area, raio;
    printf("Raio\n");
    scanf("%f%*c",&raio);
    area=pi*raio*raio;
    printf("Area do Circulo: %.4f",area);
    return 0;
}
