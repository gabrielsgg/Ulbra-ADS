#include <stdio.h>
#include <string.h>

int main(){
char string[10];
char caracter;
int i, contador=0;

printf("Digite uma palavra:\n");
scanf("%s",string);
printf("Digite um caracter:\n");
scanf("%s%*c",&caracter);
int tam=strlen(string);
for(i=0;i<tam;i++){
    if(string[i]==caracter){
        contador=contador+1;
    }
}
if (contador==1){
    printf("O Caracter: %c\nFoi digitado %d vez\n",caracter,contador);
}else{
    printf("O Caracter: %c\n Foi digitado %d vezes",caracter,contador);
}
return 0;
} 