#include <stdio.h>
#include <windows.h>


int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    int codProdutos[10], qtdProdutos[10];
    int i, codigoCliente;

    for (i=0; i<10;i++)
    {
        printf("Digite o código do produto\n");
        scanf("%d%*c",&codProdutos);
        printf("Digite a quantidade de produtos:\n",codProdutos);
        scanf("%d%*c",&qtdProdutos)
        do{
            if (codigoCliente!=0)
            {
                /* code */
            }
            
        } while (codigoCliente!=0);
        
    }   
    
    return 0;
}