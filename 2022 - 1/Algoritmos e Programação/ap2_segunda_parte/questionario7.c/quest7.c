
#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float nota, soma, media;
    soma=0;
    for (int i=0;i<10;i++){
        printf("Digite a nota:\n");
        scanf("%f%*c",&nota);
        soma=soma+nota;
    }
    /* for (int i=0;i<10;i++){
        printf("Digite a nota:\n");
        scanf("%f%*c",&nota);
    }
    soma=soma+nota; */
    media=soma/10;
    printf("A média é:%f",media);
    return 0;
}