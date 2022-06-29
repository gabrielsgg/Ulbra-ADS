#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float vlr_produto, v_novoProd, v_desconto;
    printf("Digite o valor do produto:\nR$ ");
    scanf("%f%*c",&vlr_produto);

    if(vlr_produto<=30){
        printf("Nesta situação o valor do produto não recebe nenhum desconto.", vlr_produto);
    }else if(vlr_produto>30 && vlr_produto<=100){
        v_desconto=vlr_produto*0.10;
        v_novoProd=vlr_produto-v_desconto;        
        printf("O valor do desconto é: R$ %.2f \nO valor do produto com desconto é: R$ %.2f \n",v_desconto,v_novoProd);
    }else{
        v_desconto=vlr_produto*0.15;
        v_novoProd=vlr_produto-v_desconto;        
        printf("O valor do desconto é: R$ %.2f \nO valor do produto com desconto é: R$ %.2f \n",v_desconto,v_novoProd);
    }
    return 0;
}