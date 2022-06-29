#include <stdio.h>
#include <stdlib.h>

// procedimento que converte uma string para maiúsculo
void maiusculo(char s1[], char s2[]){
    int i = 0;
    while(s1[i] != '\0'){
        s2[i] = toupper(s1[i]);
        i++;
    }
    s2[i] = '\0'; // caracteer que indica o fim da string
}

int main() {
    char str1 [20];
    char str2[500];
    printf("Digite alguma palavra para passar para maiusculo:\n");
    scanf("%s%*c",&str1);    

    printf("String original: %s\n", str1);

    maiusculo(str1, str2);
    printf("String maiuscula: %s\n", str2);

    return 0;
}



