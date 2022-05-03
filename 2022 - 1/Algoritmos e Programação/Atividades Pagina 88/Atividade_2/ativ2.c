#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float n1, n2, media;
    printf("Digite a primeira nota\n");
    scanf("%f%*c",&n1);
    printf("Digite a segunda nota\n");
    scanf("%f%*c",&n2);
    media = (n1+n2) / 2;
    printf("A média aritmética é:%.2f\n",media);
    if(media >= 0 && media < 4){
        printf("Reprovado");
    }else if(media >= 4 && media < 7){
        printf("Exame");
    }else if (media >= 7 && media <= 10){
        printf("Aprovado");
    }
    return 0;
}