#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float s_medio, v_credito;
    printf("Digite o saldo médio: R$");
    scanf("%f%*c",&s_medio);
    if (s_medio>400){
        v_credito=s_medio*30/100;
        printf("Para o valor do saldo médio: R$ %.2f \n Obteve o valor do crédito: R$ %.2f",s_medio, v_credito);
    }else if (s_medio<=400 && s_medio>300){
        v_credito=s_medio*25/100;
        printf("Para o valor do saldo médio: R$ %.2f \n Obteve o valor do crédito: R$ %.2f",s_medio, v_credito);
    }else if (s_medio<=300 && s_medio>200){
        v_credito=s_medio*20/100;
        printf("Para o valor do saldo médio: R$ %.2f \n Obteve o valor do crédito: R$ %.2f",s_medio, v_credito);
    }else if (s_medio<200){
        v_credito=s_medio*10/100;
        printf("Para o valor do saldo médio: R$ %.2f \n Obteve o valor do crédito: R$ %.2f",s_medio, v_credito);
    }      
    return 0;
}