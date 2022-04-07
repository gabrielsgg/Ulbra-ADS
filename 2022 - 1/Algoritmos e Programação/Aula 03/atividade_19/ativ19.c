#include <stdio.h>
#include <math.h>

int main()
{
        float a_degrau, a_usuario, qtd_degraus;
        printf("Altura degrau\n");
        scanf("%f%*c",&a_degrau);
        printf("Altura que o usuario precisa subir\n");
        scanf("%f%*c",&a_usuario);
        qtd_degraus = a_usuario/a_degrau;
        printf("Quantidade de degraus:%.2f\n",qtd_degraus);
    return 0;
}
