#include <stdio.h>
#include <stdlib.h>
int menordiag(int mat[6][6])
{
    int  i, j, menor=mat[0][0];
    for(i = 0 ; i < 6 ; i++)
    {
        for(j = 0 ; j < 6 ; j++)
        {
            if(i==j)
            {
                if(mat[i][j]<menor)
                {
                    menor = mat[i][j];
                }
            }
        }
    }
    return (menor);
}

int main()
{
    srand(time(NULL));
    printf("este programa exibe o menor valor da diagonal principal de uma matriz\n"
           "-a matriz  gerada aleatoriamente"
           "\n\npressione qualquer tecla para continuar");
    getch();
    int i, j;
    do
    {

        int matriz[6][6];
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 6; j++)
            {

                matriz[i][j] = rand()%100;
            }
        }

        printf("\n\na matriz gerada foi:\n");


        for (i = 0; i < 6; i++)
        {

            for (j = 0; j < 6; j++)
            {
                printf(" %d ", matriz[i][j]);
            }
            printf("\n");

        }
        int resp;
        resp = menordiag(matriz);
        printf("\no menor valor da diagonal principal e = %d",resp);
        printf("\n\n\tse quiser continuar digite 1"
               "\n\tse nao, digite 0\n\t->");
        scanf("%d",&i);

    }
    while(i==1);
    return 0;
}
