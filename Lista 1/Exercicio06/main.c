#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float kw, val, valicms, icms;
    printf("digite a quantidade de quilowatts consumidos: ");
    scanf("%f",&kw);

    val = kw * 0.12;
    icms = val * 0.18;
    valicms = val + icms;




    printf("o valor livre de impostos e: %.2f",val);
    printf("\no valor de impostos a ser pago e: %.2f",icms);
    printf("\no valor a ser pago e: %.2f",valicms);

    return 0;
}
