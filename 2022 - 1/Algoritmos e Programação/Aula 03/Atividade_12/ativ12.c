#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, r1, r2;
    printf("Digite o primeiro numero\n");
    scanf("%d%*c",&num1);
    printf("Digite o segundo numero\n");
    scanf("%d%*c",&num2);
    r1=pow(num1,num2);
    printf("Resultado r1:%d\n",r1);
    r2=pow(num2,num1);
    printf("Resultado r2:%d\n",r2);
    return 0;
}
