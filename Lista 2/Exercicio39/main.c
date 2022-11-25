#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    printf("esse programa compara a sua aposta com os 6 primeiros numeros da loteria\n"
           "\n\n\tpressione qualquer tecla para continuar");
    getch();
    int i,j,k;
    do
    {
        int loto[6], n=1,tst=0;
        int apostador[6];
        printf("\n\nfaca sua aposta:");
        for(i=0; i<6; i++)
        {
            loto[i]=rand()%6;
            for(j=0; j<i; j++)
            {
                if(loto[i]==loto[j]){
                loto[i]=rand()%10;
                j=0;
                }

            }

            printf("\nn%d-",n);
            scanf("%d",&apostador[i]);
            n++;
        }

        printf("\nnumeros da loteria: \n");
        for(i=0; i<6; i++)
        {
            printf(" %d ",loto[i]);
        }
        printf("\nseus numeros: \n");
        for(i=0; i<6; i++)
        {
            printf(" %d ",apostador[i]);
        }


        int  *acertos, ac=0, j;
        for(i=0; i<6; i++)
        {
            for(j=0; j<6; j++)
            {
                if(apostador[i]==loto[j])
                {
                    ac++;
                    break;
                }
            }
        }
        acertos = (int *)malloc(ac * sizeof(int));
        int c=0;
        for(i=0; i<6; i++)
        {
            for(j=0; j<6; j++)
            {
                if(apostador[i]==loto[j])
                {
                    acertos[c]=apostador[i];
                    c++;
                    break;
                }
            }
        }

        printf("\n a quantidade de acertos foi de = %d",ac);
        printf("\n");
        printf("os numeros que voce acertou foram: ");
        for(i=0; i<c; i++)
        {
            printf(" %d ", acertos[i]);
        }
        printf("\n\n\tse quiser continuar digite 1"
               "\n\tse nao, digite 0\n\t->");
        scanf("%d",&i);
    }
    while(i==1);
    return 0;
}
