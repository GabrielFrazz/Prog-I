#include <stdio.h>
#include <stdlib.h>

int* MUDA_TAM(int *x,int TAM_A,int TAM_N){
int i, tam;
int *y;
y = (int *)malloc(TAM_N * sizeof(int));
if(TAM_N<TAM_A){
    tam = TAM_N;
}
else{
    tam = TAM_A;
}
for(i=0;i<tam;i++){
    y[i]=x[i];
}
free(x);
return y;
}
int main()
{
    int *y;
    int tam;
    printf("quantos valores deseja digitar?\n->");
    scanf("%d",&tam);
    y=(int*)malloc(tam * sizeof(int));
    int i;
    printf("digite os valores:");
    for(i=0;i<tam;i++){
        printf("\n->");
        scanf("%d",&y[i]);
    }
    int t_n;
    printf("digite o tamanho novo do vetor:");
    scanf("%d",&t_n);
    int *x = MUDA_TAM(y,tam,t_n);
    for(i=0;i<t_n;i++){
        printf(" %d ",x[i]);
    }


    return 0;
}
