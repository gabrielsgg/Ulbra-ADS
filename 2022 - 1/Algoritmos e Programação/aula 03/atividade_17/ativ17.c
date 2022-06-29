#include <stdio.h>

int main()
{
    float salario, cheque1, cheque2, cpmf1, cpmf2, saldo;
    printf("Informe o salario recebido\n");
    scanf("%f%*c",&salario);
    printf("Informe o cheque 01\n");
    scanf("%f%*c",&cheque1);
    printf("Informe o cheque 02\n");
    scanf("%f%*c",&cheque2);
    cpmf1 = cheque1 * 0.38 / 100;
    cpmf2 = cheque2 * 0.38 / 100;
    saldo = salario - cheque1 - cheque2 - cpmf1 - cpmf2;
    printf("Saldo:%.2f",saldo);
    return 0;
}
