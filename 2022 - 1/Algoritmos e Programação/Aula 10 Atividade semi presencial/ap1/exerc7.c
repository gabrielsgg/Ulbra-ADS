#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float a, b, c;
    int i;
    printf("Digite um valor para a : ");
    scanf("%f%*c", &a);
    printf("Digite um valor para b : ");
    scanf("%f%*c", &b);
    printf("Digite um valor para c : ");
    scanf("%f%*c", &c);
    printf("Digite um valor para o indice\n 1 para ordem crescente\n 2 para ordem decrescente\n 3 para ordem desejada\n: ");
    scanf("%d%*c", &i);
    if (i == 1){
        if ((a < b) && (b < c) && (c > a)){
            printf("a ordem crescente é %.1f, %.1f e %.1f", a, b, c);
        }else if ((a < c) && (c < b) && (b > a)){
            printf("a ordem crescente é %.1f, %.1f e %.1f", a, c, b);
        }else if ((b < c) && (c < a) && (a > b)){
            printf("a ordem crescente é %.1f, %.1f e %.1f", b, c, a);
        }else if ((b < a) && (a < c) && (c > b)){
            printf("a ordem crescente é %.1f, %.1f e %.1f", b, a, c);
        }else if ((c < b) && (b < a) && (a > c)){
            printf("a ordem crescente é %.1f, %.1f e %.1f", c, b, a);
        }else if ((c < a) && (a < b) && (b > c)){
            printf("a ordem crescente é %.1f, %.1f e %.1f", c, a, b);
        }
    }
    else if (i == 2){
        if ((a > b) && (b > c) && (c < a)){
            printf("a ordem decrescente é %.1f, %.1f e %.1f", a, b, c);
        }else if ((a > c) && (c > b) && (b < a)){
            printf("a ordem decrescente é %.1f, %.1f e %.1f", a, c, b);
        }else if ((b > c) && (c > a) && (a < b)){
            printf("a ordem decrescente é %.1f, %.1f e %.1f", b, c, a);
        }else if ((b > a) && (a > c) && (c < b)){
            printf("a ordem decrescente é %.1f, %.1f e %.1f", b, a, c);
        }else if ((c > b) && (b > a) && (a < c)){
            printf("a ordem decrescente é %.1f, %.1f e %.1f", c, b, a);
        }else if ((c > a) && (a > b) && (b < c)){
            printf("a ordem decrescente é %.1f, %.1f e %.1f", c, a, b);
        }
    }
    else if (i == 3){
        if ((a > b) && (a > c)){
            printf("a ordem desejada é %.1f, %.1f e %.1f.", b, a, c);
        }else if ((b > c) && (b > a)){
            printf("a ordem desejada é %.1f, %.1f e %.1f", a, b, c);
        }else if ((c > b) && (c > a)){
            printf("a ordem desejada é %.1f, %.1f e %.1f", b, c, a);
        }
    }
    return 0;
}