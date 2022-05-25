/* Faça um programa que leia a matrícula, o nome e as três notas de 10 alunos, e indique para cada aluno, se ele foi aprovado ou não.
 considere nota 7
 */

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int i, matric;
    float n1, n2, n3, media;
    char nome [10];
    
    for (i=1;i<=10;i++){
    
    printf("Digite o nome: \n");
    scanf("%s%*c",&nome);
    printf("Digite a matricula: \n");
    scanf("%d%*c",&matric);
    printf("Digite a nota 01: \n");
    scanf("%f%*c",&n1);
    printf("Digite a nota 02: \n");
    scanf("%f%*c",&n2);
    printf("Digite a nota 03: \n");
    scanf("%f%*c",&n3);
    media=(n1+n2+n3)/3;
    if (media>=7)
    {
        printf("O aluno %s matricula %d foi aprovado \n", nome, matric);
    }else{
        printf("O Aluno %s matricula %d foi reprovado \n",nome, matric);
    }
    }
    return 0;
}
