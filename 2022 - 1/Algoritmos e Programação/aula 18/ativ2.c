#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

char nome[20];
char sobreNome[20];
char nomeCompleto[30];
 
printf("Digite seu nome:\n");
scanf("%s%*c",nome);
printf("Digite seu sobrenome:\n");
scanf("%s%*c",sobreNome);
 
strcat(nomeCompleto,nome);
strcat(nomeCompleto," ");
strcat(nomeCompleto,sobreNome);
printf("%s",nomeCompleto);
 
return 0;
 
}
