#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
     //ENTRADA
    float pre_fabr_carro, perc_distr, perc_impos, sai_perc_distr, sai_perc_impos, preco_final;

    printf("Qual o preço de fabricação do carro? ");
    scanf ("%f", &pre_fabr_carro);

    printf("Qual o percentual do distribuidor? ");
    scanf ("%f", &perc_distr);

    printf("Qual o percentual de impostos? ");
    scanf("%f", &perc_impos);

    //SAIDA
    sai_perc_distr = perc_distr * pre_fabr_carro / 100;
    sai_perc_impos = perc_impos * pre_fabr_carro / 100;
    preco_final = sai_perc_distr + sai_perc_impos + pre_fabr_carro;

    printf("O valor do carro é: %.2f", preco_final);



    return 0;
}
