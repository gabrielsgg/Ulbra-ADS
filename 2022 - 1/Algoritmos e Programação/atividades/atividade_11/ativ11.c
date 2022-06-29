#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float sal_atual, novo_sal, v_aumento;
    printf("Salário atual: R$ ");
    scanf("%f%*c",&sal_atual);

    if(sal_atual<=300){
        v_aumento=sal_atual*0.15;
        novo_sal=(sal_atual*0.15)+sal_atual;
        printf("O valor do aumento é: R$ %.2f \nValor do novo sálario é: R$ %.2f", v_aumento, novo_sal);
    }else if(sal_atual>300 && sal_atual<=600){
        v_aumento=sal_atual*0.10;
        novo_sal=(sal_atual*0.10)+sal_atual;
        printf("O valor do aumento é: R$ %.2f \nValor do novo sálario é: R$ %.2f", v_aumento, novo_sal);
    }else if(sal_atual>600 && sal_atual<=900){
        v_aumento=sal_atual*0.05;
        novo_sal=(sal_atual*0.05)+sal_atual;
        printf("O valor do aumento é: R$ %.2f \nValor do novo sálario é: R$ %.2f", v_aumento, novo_sal);
    }else{
        printf("O sálario não sofreu reajuste.");
    }
    
    
           
    return 0;
}