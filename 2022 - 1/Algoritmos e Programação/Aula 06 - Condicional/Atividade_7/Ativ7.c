#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int i;
    float a, b, c;
    printf("Digite um valor para A:\n");
    scanf("%f%*c", &a);
    printf("Digite um valor para B:\n");
    scanf("%f%*c", &b);
    printf("Digite um valor para C:\n");
    scanf("%f%*c", &c);
    printf("Digite um valor para I (1,2 ou 3):\n");
    scanf("%d%*c", &i);
    switch (i = 1){
        case 1:
        if (a < b && b < c){
            if (b < c){
                printf("A ordem crescente dos números é: %.2f %.2f %.2f", a, b, c);
            }else{
                printf("A ordem crescente dos números é: %.2f %.2f %.2f", a, c, b);
            }
        }
        break;
        case 2:
        if (b < a && b < c){
            if (a < c){
                printf("A ordem crescente dos números é: %.2f %.2f %.2f", b, a, c);
            }else{
                printf("A ordem crescente dos números é: %.2f %.2f %.2f", b, c, a);
            }
        }
        break;
        case 3:
        if (c < a && c < b){
            if (a < b){
                printf("A ordem crescente dos números é: %.2f %.2f %.2f", c, a, b);
            }else{
                printf("A ordem crescente dos números é: %.2f %.2f %.2f", c, b, a);
            }
        }
        break;
    }

    switch (i = 2){
        case 1:
        if (a > b && a > c){
            if (b > c){
                printf("A ordem crescente dos números é: %.2f %.2f %.2f", a, b, c);
            }else{
                printf("A ordem crescente dos números é: %.2f %.2f %.2f", a, c, b);
            }
            break;
        case 2:
            if (b > a && b > c){
                if (a > c){
                    printf("A ordem crescente dos números é: %.2f %.2f %.2f", b, a, c);
                }else{
                    printf("A ordem crescente dos números é: %.2f %.2f %.2f", b, c, a);
                }
            }
            break;
        case 3:
            if (c > a && c > b){
                if (a > b){
                    printf("A ordem crescente dos números é: %.2f %.2f %.2f", c, a, b);
                }else{
                    printf("A ordem crescente dos números é: %.2f %.2f %.2f", c, b, a);
                }
            }
            break;
    }
    switch (i = 3){
        case 1:
            if (a > b && a > c){
                printf("A ordem desejada é: %.2f %.2f %.2f", b, a, c);
            }else if (b > a && b > c){
                printf("A ordem desejada é: %.2f %.2f %.2f", a, b, c);
            }else if (c > a && c > b){
                printf("A ordem desejada é: %.2f %.2f %.2f", a, c, b);
            }
            break;
        }
        return 0;
    }
}