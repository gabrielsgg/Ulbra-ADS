    /* Elabore um programa que escreva a tabuada do número 9. */

    #include <stdio.h>
    #include <windows.h>

    int main(){
        UINT CPAGE_UTF8 = 65001;
        SetConsoleOutputCP(CPAGE_UTF8);
        int i;
        int tabu;
        i=0;
        tabu=0;    
        printf("A tabuada do 9 é:\n");
        for (i=0;i<=10;i++){        
            tabu=9*i;
            printf("9 X %d = %d \n",i, tabu);
            
        }
        return 0;
    }