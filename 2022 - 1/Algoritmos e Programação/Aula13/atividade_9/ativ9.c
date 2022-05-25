    /* Elabore um programa que escreva a tabuada de um número qualquer */

    #include <stdio.h>
    #include <windows.h>

    int main(){
        UINT CPAGE_UTF8 = 65001;
        SetConsoleOutputCP(CPAGE_UTF8);
        int i;
        int tabu, num;
        i=0;
        tabu=0;    
        printf("Qual a tabuada desejada:\n");
        scanf("%d%*c",&num);
        for (i=0;i<=10;i++){        
            
            if (num>=0 && num<=10){
            tabu=num*i;
            printf("%d X %d = %d \n",num, i, tabu);
            } 
               
        }
        printf("Digite a tabuada de 1 a 10.");
            
        return 0;
    }