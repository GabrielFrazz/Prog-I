#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, np=0;
    float pre, pre20, mid, mid20, som=0, som20=0;

    do{
        np = np + 1;
        printf("\ndigite o codigo do produto %d: ",np);
        scanf("%d",&codigo);

        if(codigo>0) {

        printf("digite o preco do produto %d: ",np);
        scanf("%f",&pre);

            som = som + pre;

            pre20 = pre + (pre * 0.20);

            som20 = som20 + pre20;


        printf("\n\tpreco pos aumento");
        printf("\n%d - R$%.2f\n",codigo,pre20);
        }
       }while(codigo>0);

    mid = som/(np - 1);
    mid20 = som20/(np - 1);

    printf("\n\n\ta media de preco antes do aumento era de R$%.2f",mid);
    printf("\n\n\ta media de preco apos o aumento e de R$%.2f\n",mid20);

    return 0;
}
