#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int somamat(int mat[7][6])
{
    int  i, j, somalin = 0, somacol = 0, soma=0;
    for(i = 0 ; i < 7 ; i++)
    {
        for(j = 0 ; j < 6 ; j++)
        {
            if(i==4)
            {
                somalin=somalin+mat[i][j];
            }
            if(j==2)
            {
                somacol=somacol+mat[i][j];
            }
        }
    }
    soma=somalin+somacol;
    return (soma);
}

int main()
{
    srand(time(NULL));
    printf("Este programa calcula a soma da linha 5 e coluna 3 de uma matriz 7x6\n-a matriz e gerada aleatoriamente\n"
           "\npressione qualquer tecla para continuar");
    getch();
    int i, j;
    do
    {

        int matriz[7][6];

        for (i = 0; i < 7; i++)
        {


            for (j = 0; j < 6; j++)
            {

                matriz[i][j] = rand()%10;
            }
        }

        printf("\n\na matriz gerada foi:\n");

        for (i = 0; i < 7; i++)
        {

            for (j = 0; j < 6; j++)
            {
                printf(" %d ", matriz[i][j]);
            }
            printf("\n");

        }
        int resp;
        resp = somamat(matriz);
        printf("\na soma da linha 5 com a coluna 3 = %d",resp);
        printf("\n\n\tse quiser continuar digite 1"
               "\n\tse nao, digite 0\n\t->");
        scanf("%d",&i);
    }
    while(i==1);
    return 0;
}
