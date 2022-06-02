#include <stdio.h>
#include <math.h>

int main(){
    float nota1, nota2, nota3, media;
    printf("Digite a nota da primeira prova ");
    scanf("%f%*c",&nota1);
    printf("Digite a nota da segunda prova ");
    scanf("%f%*c",&nota2);
    printf("Digite a nota da terceira prova ");
    scanf("%f%*c",&nota3);
    media=(nota1+nota2+nota3)/3;
    if((media>=9) && (media<=10)){
        printf("Sua média é %.2f \nObteve conceito A\n Aprovada",media);
    }else if((media>=7.5) && (media<9)){
        printf("Sua média é %.2f \nObteve conceito B\n Aprovado",media);
    }else if((media>=6) && (media<7.5)){
        printf("Sua média é %.2f \nObteve conceito C\n Aprovado",media);
    }else if((media>=4) && (media<6)){
        printf("Sua média é %.2f \nObteve conceito D\n Reprovado",media);
    }else if((media>=0) && (media<4)){
        printf("Sua média é %.2f \nObteve conceito E\n Reprovado",media);
    }else{
        printf("Valores inválidos");
    }
    return 0;
}