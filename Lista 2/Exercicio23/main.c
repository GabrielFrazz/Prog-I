#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int i, j, tam;
    printf("esse programa constrói um quadrado no formato:"
           "\n\t- * *"
           "\n\t* - *"
           "\n\t* * -"
           "\n\npressione qualquer tecla para continuar");
    getch();
    do
    {

        printf("\n digite o tamanho do quadrado:\n->");
        scanf("%d", &tam);


        for (i = 0; i < tam; i++)
        {
            printf("\t");
            for (j = 0; j < tam; j++)
            {
                if (j == i)
                {
                    printf(" - ");
                }
                else
                {
                    printf(" * ");
                }
            }
            printf("\n");
        }

        printf("\n\tse deseja continuar digite 1\n\tse nao digite 0\n\t->");
        scanf("%d",&tam);
    }
    while(tam==1);
    return 0;
}
