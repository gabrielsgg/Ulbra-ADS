#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float n1, n2, n3, n4, media;
    printf("Digite a primeira nota\n");
    scanf("%f%*c",&n1);
    printf("Digite a segunda nota\n");
    scanf("%f%*c",&n2);
    printf("Digite a terceira nota\n");
    scanf("%f%*c",&n3);
    printf("Digite a quarto nota\n");
    scanf("%f%*c",&n4);
    media = (n1+n2+n3+n4) / 4;
    printf("A média aritmética é:%.2f\n",media);
    if(media >= 7){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }
    return 0;
}