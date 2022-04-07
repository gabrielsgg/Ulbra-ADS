#include <stdio.h>

int main()
{
    float ano_nascimento, ano_atual, idade_atual, idade_2050;
    printf("Digite o ano de nascimento\n");
    scanf("%f%*c",&ano_nascimento);
    printf("Digite o ano atual\n");
    scanf("%f%*c",&ano_atual);
    idade_atual = ano_atual - ano_nascimento;
    idade_2050 = 2050 - ano_nascimento;
    printf("Idade atual:%.0f\n",idade_atual);
    printf("Idade em 2050:%.0f\n",idade_2050);
    return 0;
}
