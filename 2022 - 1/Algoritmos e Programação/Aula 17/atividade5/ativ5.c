#include <stdio.h>
#include <windows.h>


int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int tlogica[5], tLinguagem[3];
    for(int i=0;i<5;i++){
        printf("Digite o código:\n");
        scanf("%d%*c",&tlogica[i]);
    }   
    
    for(int i=0;i<5;i++){
        printf("Digite o código:\n");
        scanf("%d%*c",&tLinguagem[i]);
    }   
    
    for(int i= 0;i<3;i++){
        for(int i=0;){}
        
        
        if(tLinguagem[i]==tlogica[i]){

        }
    }
}
