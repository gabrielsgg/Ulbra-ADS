#include <stdio.h>

int main()
{
    float horas_t, vlr_sal_min, vlr_hora_t, vlw_sal_bru, imp, sal_liq;
    printf("Quantas horas trabalhadas\n");
    scanf("%f%*c",&horas_t);
    printf("Valor salario minimo\n");
    scanf("%f%*c",&vlr_sal_min);
    vlr_hora_t = vlr_sal_min / 2;
    vlw_sal_bru = vlr_hora_t*horas_t;
    imp = vlw_sal_bru * 3 / 100;
    sal_liq = vlw_sal_bru - imp;
    printf("Salario liquido:%.2f\n",sal_liq);
    return 0;
}
