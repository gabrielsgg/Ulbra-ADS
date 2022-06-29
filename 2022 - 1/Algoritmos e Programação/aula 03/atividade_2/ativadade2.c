#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;
    printf("Informe a nota 1\n");
    scanf("%f%*c",&nota1);
    printf("Informe a nota 2\n");
    scanf("%f%*c",&nota2);
    printf("Informe a nota 3\n");
    scanf("%f%*c",&nota3);
    media=(nota1+nota2+nota3)/3;
    printf("Medias notas: %.2f", media);
    return 0;
}
