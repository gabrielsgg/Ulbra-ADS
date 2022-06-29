
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int x=3, y;
    y=pow(x,2);
    x=sqrt(y);
    y+=x;
    x=y+x*2;
    y=x+x/3;
    printf("%i",x+y);

    
    return 0;
}