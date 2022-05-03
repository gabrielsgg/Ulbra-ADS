#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float nota1, nota2, nota3, media, nota_exame;
    printf("Digite a primeira nota\n");
    scanf("%f%*c",&nota1);
    printf("Digite a segunda nota\n");
    scanf("%f%*c",&nota2);
    printf("Digite a terceira nota\n");
    scanf("%f%*c",&nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("Média aritmética %.2f\n",media);
    if (media >= 0 && media < 3){
        printf("Reprovado");
    }else if(media >= 3 && media <7){
        printf("Exame\n");        
        nota_exame = 12 - media;
        printf("Deve tirar nota %.2f para ser aprovado\n",nota_exame);
    }else if (media >= 7 && media <= 10){
        printf("Aprovado");
    }   
    return 0;
}