#include <stdio.h>
#include <stdlib.h>

int somalin4(int mat[5][5])
{
    int i, j, soma = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == 3)
            {
                soma = soma + mat[i][j];
            }
        }
    }
    return (soma);
}

int somacol2(int mat[5][5])
{
    int i, j, soma = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (j == 1)
            {
                soma = soma + mat[i][j];
            }
        }
    }
    return (soma);
}

int somadiagprin(int mat[5][5])
{
    int i, j, soma = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == j)
            {
                soma = soma + mat[i][j];
            }
        }
    }
    return (soma);
}

int somadiagsec(int mat[5][5])
{
    int i, j, soma=0, conta=4;
    for(i = 0 ; i < 5 ; i++)
    {
        for(j = 0 ; j < 5 ; j++)
        {
            if(j==conta)
            {
                soma = soma + mat[i][j];
            }

        }
        conta--;
    }
    return (soma);
}


int main()
{
    printf("este programa exibe, de uma matriz 5x5:\n"
           "-a soma da linha 4\n"
           "-a soma da coluna 2\n"
           "-a soma da diagonal principal\n"
           "-a soma da diagonal secundaria\n"
           "\npressione qualquer tecla para continuar");
    getch();
    int i, j;
    do
    {
        int matriz[5][5];
        printf("\n\ndigite os elementos da matriz:\n");
        for (i = 0; i < 5; i++)
        {
            printf("\nlinha %d: \n",i+1);
            for (j = 0; j < 5; j++)
            {
                printf("->");
                scanf("%d", &matriz[i][j]);
            }
        }

        printf("\na matriz digitada foi:\n");


        for (i = 0; i < 5; i++)
        {

            for (j = 0; j < 5; j++)
            {
                printf(" %d ", matriz[i][j]);
            }
            printf("\n");

        }
        int resp;
        resp = somalin4(matriz);
        printf("\na soma da linha 4 e = %d\n", resp);
        resp = somacol2(matriz);
        printf("\na soma da coluna 2 e = %d\n", resp);
        resp = somadiagprin(matriz);
        printf("\na soma da diagonal principal e = %d\n", resp);
        resp = somadiagsec(matriz);
        printf("\na soma da diagonal secundaria e = %d\n", resp);
        printf("\n\n\tse quiser continuar digite 1"
               "\n\tse nao, digite 0\n\t->");
        scanf("%d",&i);
    }
    while(i==1);

    return 0;
}
