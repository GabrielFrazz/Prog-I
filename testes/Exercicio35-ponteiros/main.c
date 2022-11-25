#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float *somas(int t, float mat[t][t])
{
    int conta = t - 1, i, j;
    float *somas = NULL, somalin = 0, somacol = 0, somadiagp = 0, somadiagsec = 0;
    somas = (float *)malloc(4 * sizeof(float));
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < t; j++)
        {
            if (i == 3)
            {
                somalin = somalin + mat[i][j];
                *somas = somalin;
            }
            if (j == 1)
            {
                somacol = somacol + mat[i][j];
                *(somas + 1) = somacol;
            }
            if (i == j)
            {
                somadiagp = somadiagp + mat[i][j];
                *(somas + 2) = somadiagp;
            }
            if (j == conta)
            {
                somadiagsec = somadiagsec + mat[i][j];
                *(somas + 3) = somadiagsec;
            }
        }
        conta--;
    }
    return somas;
}
int main()
{
    srand(time(NULL));
    int loop;
    printf("este programa gera uma matriz quadrada aleatoria e exibe:\n"
           "-a soma da linha 4\n"
           "-a soma da coluna 2\n"
           "-a soma da diagonal principal\n"
           "-a soma da diagonal secundaria\n");
    printf("\n\tpressione qualquer tecla para continuar");
    getchar();

    do
    {
        int t;
        do
        {

            t = rand() % 5;

        } while (t < 4);
        float matriz[t][t];

        int i, j;
        printf("\n\na matriz A gerada foi:\n");
        for (i = 0; i < t; i++)
        {
            for (j = 0; j < t; j++)
            {

                matriz[i][j] = rand() % 10;
                printf(" %.1f ", matriz[i][j]);
            }
            printf("\n");
        }
        float *resp = somas(t, matriz);

        printf("\na soma da linha 4 e = %.2f\n", resp[0]);
        printf("\na soma da coluna 2 e = %.2f\n", resp[1]);
        printf("\na soma da diagonal principal e = %.2f\n", resp[2]);
        printf("\na soma da diagonal secundaria e = %.2f\n", resp[3]);
        free(resp);
        int aux, aux2, IM1, IM2, conta_p = 0;
        float div;

        printf("\n\trealizando a eliminacao gaussiana: ");

        for (i = 0; i < t; i++)
        {
            for (j = 0; j < t; j++)
            {
                if (i == j && matriz[i][j] != 1)
                { // diagonal = 1
                    aux = 0;
                    div = matriz[i][j];
                    do
                    {
                        matriz[i][aux] = matriz[i][aux] * (1 / div);
                        aux++;
                    } while (aux < t);

                    conta_p++;

                    printf("\n\t-precione qualquer tecla-");
                    getchar();

                    printf("\n\npasso %d: \nfazer com que a primeira entrada nao nula seja = 1\n\n", conta_p);

                    for (IM1 = 0; IM1 < t; IM1++)
                    {
                        for (IM2 = 0; IM2 < t; IM2++)
                        {
                            printf(" %.1f ", matriz[IM1][IM2]);
                            if (IM2 == t - 1 && IM1 == i)
                            {
                                printf("---L%d = L%d * 1/%.2f", i + 1, i + 1, div);
                            }
                        }
                        printf("\n");
                    }

                } // final
                float mult_lin;
                if (i == j && matriz[i][j] == 1) // zerando as entradas abaixo
                {
                    printf("\n\tZERANDO AS ENTRADAS ABAIXO DO PIVOT");
                    int percorre = j;
                    for (aux = i+1; aux < t; aux++)
                    {
                        mult_lin = matriz[aux][j] * -1;
                        for (aux2 = j; aux2 < t; aux2++)
                        {
                            matriz[aux][aux2] = matriz[aux][aux2] + (matriz[i][percorre] * mult_lin);
                            percorre++;
                        }
                        percorre = j;
                        conta_p++;
                        printf("\n\npasso %d \n\t-pressione qualquer tecla-", conta_p);
                        getchar();
                        for (IM1 = 0; IM1 < t; IM1++)
                        {
                            for (IM2 = 0; IM2 < t; IM2++)
                            {
                                printf(" %.1f ", matriz[IM1][IM2]);
                                if (IM1 == aux && IM2 == t - 1)
                                {
                                    printf("---L%d = L%d + %.1f*L%d", aux + 1, aux + 1, mult_lin, i + 1);
                                }
                            }
                            printf("\n");
                        }
                    }
                }
            }
        }
        printf("\n\tse deseja continuar digite 1\n\tse nao, digite 0\n\t->");
        scanf("%d", &loop);

    } while (loop == 1);

    return 0;
}
