#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("este programa le 5 valores reais e exibe o maior e menor deles\n");
    printf("\npressione qualquer tecla para continuar\n");
    getch();
    int i;
    do
    {
        float *x=NULL;
        x = (float *)malloc(5 * sizeof(float));
        printf("\ndigite 5 valores reais\n");
        for(i=0; i<5; i++)
        {
            printf("->");
            scanf("%f",&x[i]);
        }
        float maior, menor;
        maior = x[0];
        menor = x[0];
        for(i=0; i<5; i++)
        {
            if(maior<x[i])
            {
                maior = x[i];
            }
            else if(menor>x[i])
            {
                menor = x[i];
            }
        }

        printf("o maior valor digitado foi = %.2f",maior);
        printf("\no menor valor digitado foi = %.2f",menor);

        free(x);

        printf("\n\n\tse deseja continuar digite 1\n"
               "\tse nao, digite 0\n\t->");
        scanf("%d",&i);
    }
    while(i==1);

    return 0;
}
