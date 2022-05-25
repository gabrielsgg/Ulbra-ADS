
#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float nota, media;
    int i;
    i=1;
    
    do{
        printf("Digite a nota %d:\n",i);
        scanf("%f%*c",&nota);
        media=(nota*10)/10;
        i++;
    } while (i<=10);
    printf("A média é: %2.f",media);
    return 0;
}