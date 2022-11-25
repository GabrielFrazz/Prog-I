#include <stdio.h>

int somamat(int mat[5][5])
{
    int  i, j, soma=0;
    for(i = 0 ; i < 5 ; i++)
    {
        for(j = 0 ; j < 5 ; j++)
        {
            soma = soma + mat[i][j];
        }
    }
    return (soma);
}

int main()
{
    printf("este programa calcula a soma dos elementos de uma matriz 5x5\n"
           "\npressione qualquer tecla para continuar");
    getch();
    int i,j;
    do
    {
        int matriz[5][5];
        printf("\n\ndigite os elementos da matriz:\n");
        for(i=0; i<5; i++)
        {
            printf("\nlinha %d:\n",i+1);
            for(j=0; j<5; j++)
            {
                printf("->");
                scanf("%d",&matriz[i][j]);
            }
        }
        int resp;
        resp = somamat(matriz);
        printf("\na soma = %d",resp);
        printf("\n\n\tse quiser continuar digite 1"
               "\n\tse nao, digite 0\n\t->");
        scanf("%d",&i);
    }
    while(i==1);
    return 0;
}
