#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

char nomes [3][100], comparar [100];
int i, j, x;

for(i=0;i<3;i++){
    printf("\nNome %i: ",i+1);
    gets(nomes[i]);
}

    
for (i=0;i<3;i++){
    for(j=0;j<3;j++){
        x=strcmp(nomes[i],nomes[j]);
        if (x < 0){
            strcpy(comparar,nomes[i]);
            strcpy(nomes[i],nomes[j]);
            strcpy(nomes[j],comparar);
        }
        
    }
}

for (int i=0;i<3;i++){
    printf("\n%s\n",nomes[i]);
}

return 0;
 
}
