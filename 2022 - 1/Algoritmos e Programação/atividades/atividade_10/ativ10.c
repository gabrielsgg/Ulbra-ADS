#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float p_fabrica, p_consumidor, porc_dist, imp;
    printf("Custo de fábrica: R$ ");
    scanf("%f%*c",&p_fabrica);
    if (p_fabrica<=12000){
        p_consumidor=(p_fabrica*0.05)+p_fabrica;
        printf("O preço do consumidor é: R$ %.2f",p_consumidor);
    }else if (p_fabrica>12000 && p_fabrica<=25000){
        p_consumidor=(p_fabrica*0.10)+(p_fabrica*0.15)+p_fabrica;
        printf("O preço do consumidor é: R$ %.2f",p_consumidor);
    }else if (p_fabrica>25000){
        p_consumidor=(p_fabrica*0.15)+(p_fabrica*0.20)+p_fabrica;
        printf("O preço do consumidor é: R$ %.2f",p_consumidor);
    }    
    return 0;
}