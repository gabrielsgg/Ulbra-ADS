
#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float x=3, y=2;
    y+=x;
    x++;
    y--;
    x*=y;
    y/=3;
    printf("%07.2f",x+y);
    return 0;
}