#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float x=3, y;
    y=x+pow(x,2);
    x += y;
    y++;
    x-=y;
    y/=3;
    printf("%.2f",x+y);
    return 0;
}