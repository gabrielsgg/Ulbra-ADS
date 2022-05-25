
#include <stdio.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float invest, valor, vlr_corrigido;
    printf("Escolha o investimento:\n1 - Poupança.\n2 - Fundos renda fixa.\n    Opção: ");
    scanf("%f%*c",&invest);
    printf("Digite o valor que será aplicado:\nR$ ");
    scanf("%f%*c",&valor);
    if (invest==1){
        vlr_corrigido=(valor*0.03)+valor;
        printf("O valor corrigido é: R$ %.2f",vlr_corrigido);
    }else if(invest==2){
        vlr_corrigido=(valor*0.04)+valor;
        printf("O valor corrigido é: R$ %.2f",vlr_corrigido);
    }else{
        printf("Você escolheu a opção inválida.");
    }    
    return 0;
}
