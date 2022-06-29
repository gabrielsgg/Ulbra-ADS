#include <stdio.h>
#include <string.h>

int main(){
    float nota1[10],nota2[10],media[10],compararNota;
    char nome[10][20];
    int opcao, i=0, contadorAlunos=0, posicao;
    char opcaoAdicionar;
    
    do{
 
        for(int i=0;i<10;i++){
            printf("Digite a primeira nota do aluno %d:\n",i+1);
            scanf("%f%*c",&nota1[i]);
            printf("Digite a segunda nota do aluno %d:\n",i+1);
            scanf("%f%*c",&nota2[i]);
            media[i]=(nota1[i]+nota2[i])/2;
            printf("Digite o nome do aluno %d:\n",i+1);
            scanf("%s%*c",&nome[i]);
            contadorAlunos++;
            printf("\n\nDeseja adicionar um novo aluno [S/N]:\n");
            scanf("%s%*c",&opcaoAdicionar);
            if (opcaoAdicionar=='S' || opcaoAdicionar=='s'){
            }else{
                break;
            }
        }
        i++;
            
    } while (i==0);

    
    do{
        
        printf("\nQual opção do menu você deseja:\n");
        printf("Opção 1: Listar todos os alunos Aprovados.\n");
        printf("Opção 2: Listar todos os Alunos Reprovados.\n");
        printf("Opção 3: Listar todos os alunos com nota maior que uma nota informada pelo usuário.\n");
        printf("Opção 4: Informar uma Posição e o programa exibir os dados e notas do aluno.\n");
        printf("Opção 5: Encerrar o programa.\n");
        scanf("%d%*c",&opcao);
        switch (opcao){
        case 1:
            printf("Os alunos aprovados são:\n");
            for (i = 0; i < contadorAlunos; i++){
                if (media[i]>=7){  
                    printf("Aluno %d : %s -- Média %.2f\n",i+1, nome[i], media[i]);
                }
            }
            break;
        case 2:
            printf("Os alunos reprovados são:\n");
            for (i = 0; i < contadorAlunos; i++){
                if (media[i]<7){  
                    printf("Aluno %d : %s -- Média: %.2f\n",i+1, nome[i], media[i]);
                }
            }
            break;
        case 3:
            printf("Digite uma nota para comparar com as notas salvas:");
            scanf("%f%*c",&compararNota);
            for (i = 0; i < contadorAlunos; i++){
                if (nota1[i]>compararNota || nota2[i]>compararNota){  
                    printf("\nO Aluno %s tem a nota maior que a informada.\n",nome[i]);
                }else{
                    printf("\nNenhum aluno possui nota maior que a informada.\n");
                    break;
                }
            }
            break;
        case 4:
            printf("\nDigite a posição para exibir os dados salvos:\n");
            scanf("%d%*c",&posicao);
            for (i = 0; i <= contadorAlunos; i++){
                if (posicao==i+1){
                    printf("O Aluno %s:\nObteve as notas:\nNota 01: %.2f\nNota 02: %.2f\n",nome[i],nota1[i],nota2[i]);
                } 
            }
            break;
        default:
            printf("Usuário, você precisa digitar uma opção do menu.");
            break;
        }
    } while (opcao!=5);
    
    return 0;
}

