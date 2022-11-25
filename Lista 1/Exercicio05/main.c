#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float sb, sbr, imp, sl, vhe, nhe, rhe;

    printf("digite o salario bruto: ");
    scanf("%f",&sb);

    printf("numero de horas extras trabalhadas: ");
    scanf("%f",&nhe);

    //supondo que o valor da hora extra corresponde a 50% da hora convencional e que a jornada de trabalho e de 8h.

    vhe = ((sb/30)/8)*0.50;
    rhe = vhe * nhe;

    sbr = sb + rhe;

    imp = sbr * 0.08;

    sl = sbr - imp;

    printf("o salario liquido a ser recebido e: %.2f",sl);
    return 0;

}
