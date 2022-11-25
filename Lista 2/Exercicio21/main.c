#include <stdio.h>

int main()
{

    printf("este programa exibe todas as jogadas possiveis de 4 dados de 6 faces\n");
    int i,j,k,l, conta=0;
    for(i=1; i<=6; i++)
    {
        for(j=1; j<=6; j++)
        {
            for(k=1; k<=6; k++)
            {
                for(l=1; l<=6; l++)
                {
                    if(i!=j && i!=k && i!=l & j!=k && j!=l && k!=l)
                    {
                        printf("d1:%d - d2:%d - d3:%d - d4:%d\n", i, j, k, l);
                        conta++;
                    }
                }
            }
        }
    }
    printf("total=%d",conta);
    return 0;
}
