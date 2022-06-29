
#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int x,f;
    f=10;
    for (x=1;x<f;x++){
        if (x%2==0)
        {
            f++;
            continue;
        }
        if (f==x)
        {
            break;
        }
        
    }
    printf("Valor de x=%d\n",x);
    printf("Valor de f=%d\n",f);
    return 0;
}