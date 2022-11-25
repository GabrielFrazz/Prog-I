#include <stdio.h>
#include <stdlib.h>

typedef struct complexo_est{
float num, numi;
}complexo;


int main()
{
    complexo x, y;
    printf("digite dois numeros complexos:\n");
    printf("\n\tprimeiro\n\n");
    printf("digite a parte real:\n");
    scanf("%f",&x.num);
    printf("agora a parte imaginaria\n");
    scanf("%f",&x.numi);
     printf("\n\tsegundo\n\n");
    printf("digite a parte real:\n");
    scanf("%f",&y.num);
    printf("agora a parte imaginaria\n");
    scanf("%f",&y.numi);
    complexo soma;
    soma.num = x.num+y.num;
    soma.numi = x.numi+y.numi;
    printf("\na soma dos dois numeros é:\n->%.2f + %.2fi",soma.num,soma.numi);
}
