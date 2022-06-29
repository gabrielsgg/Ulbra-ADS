
#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int numero;

    for (int i=1000;i<=1500;i++){
        
        if(i%2!=0){
        printf ("Numeros impares: %d\n",i);
        }

    }
    
    return 0;
  
}