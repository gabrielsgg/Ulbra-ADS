
#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int i=1000;

    while(i<=1500){
        
        if(i%2!=0){
        printf ("Numeros impares: %d\n",i);
        }
        i++;
    }
       
    return 0;
  
}