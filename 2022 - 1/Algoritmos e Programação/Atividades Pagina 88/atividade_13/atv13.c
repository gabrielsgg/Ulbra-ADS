#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    float p_produto, n_preco;
    printf("Digite o preço do prduto:\nR$ ");
    scanf("%f%*c",&p_produto);
   if(p_produto<=50){
       n_preco=(p_produto*0.05)+p_produto;
       printf("O novo valor do produto é:\nR$ %.2f \n",n_preco);
   }else if(p_produto>50 && p_produto<=100){
       n_preco=(p_produto*0.10)+p_produto;
       printf("O valor do produto é:\nR$ %.2f \n",n_preco);
   }else{
       n_preco=(p_produto*0.15)+p_produto;
       printf("O valor do produto é:\nR$ %.2f \n",n_preco);
   }

   if(n_preco<=80){
       printf("Este produto está classificado como barato");
    }else if(n_preco>80 && n_preco<=120){
        printf("Este produto está classificado como normal");
    }else if(n_preco>120 && n_preco<=200){
        printf("Este produto está classificado como Caro");
    }else{
        printf("Este produto está classificado como muito caro");
    }             
    return 0;
}