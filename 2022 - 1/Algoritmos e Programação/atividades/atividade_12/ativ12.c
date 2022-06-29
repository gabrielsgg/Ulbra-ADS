#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float sal_bruto, v_receber, v_imposto, sal_gratif;
    printf("Digite o valor do salário bruto:\n R$ ");
    scanf("%f%*c",&sal_bruto);

    if(sal_bruto<=350){
        v_imposto=sal_bruto*0.07;
        v_receber=sal_bruto-v_imposto;
        sal_gratif=v_receber+100;
        printf("Nesta situação o valor do imposto é: R$ %.2f \nO valor do sálario descontando o imposto é: R$ %.2f \nSalário líquido mais gratificação de R$ 100,00 é: R$ %.2f .", v_imposto, v_receber, sal_gratif);
    }else if(sal_bruto>350 && sal_bruto<=600){
        v_imposto=sal_bruto*0.07;
        v_receber=sal_bruto-v_imposto;
        sal_gratif=v_receber+75;
        printf("Nesta situação o valor do imposto é: R$ %.2f \nO valor do sálario descontando o imposto é: R$ %.2f \nSalário líquido mais gratificação de R$ 75,00 é: R$ %.2f .", v_imposto, v_receber, sal_gratif);
    }else if(sal_bruto>600 && sal_bruto<=900){
        v_imposto=sal_bruto*0.07;
        v_receber=sal_bruto-v_imposto;
        sal_gratif=v_receber+50;
        printf("Nesta situação o valor do imposto é: R$ %.2f \nO valor do sálario descontando o imposto é: R$ %.2f \nSalário líquido mais gratificação de R$ 50,00 é: R$ %.2f .", v_imposto, v_receber, sal_gratif);
    }else{
        v_imposto=sal_bruto*0.07;
        v_receber=sal_bruto-v_imposto;
        sal_gratif=v_receber+35;
        printf("Nesta situação o valor do imposto é: R$ %.2f \nO valor do sálario descontando o imposto é: R$ %.2f \nSalário líquido mais gratificação de R$ 35,00 é: R$ %.2f .", v_imposto, v_receber, sal_gratif);
    }      
    return 0;
}