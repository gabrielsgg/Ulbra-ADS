#include <stdio.h>

int main()
{
    
    float preco_fabrica, perc_lucro, perc_impostos, lucro_dist, vlr_impostos, preco_final_veic;
    printf("Preco de fabrica\n");
    scanf("%f%*c",&preco_fabrica);
    printf("Percentual de lucro\n");
    scanf("%f%*c",&perc_lucro);
    printf("Percentual Impostos\n");
    scanf("%f%*c",&perc_impostos);
    lucro_dist = preco_fabrica*perc_lucro/100;
    vlr_impostos = preco_fabrica*perc_impostos/100;
    preco_final_veic = preco_fabrica+perc_lucro+perc_impostos;
    printf("Lucro distribuidor:%.2f\n",lucro_dist);
    printf("Valor dos Impostos:%.2f\n",vlr_impostos);
    printf("Prec1o final veiculo:%.2f\n",preco_final_veic);
    return 0;
}
