#include <stdio.h>
#include <locale.h>

int contanegativos(int vet[])
{
    int i, cont = 0;
    for (i = 0; i < 10; i++)
    {
        if (vet[i] < 0)
        {
            cont++;
        }
    }
    return (cont);
}

int main()
{
    setlocale(LC_ALL, "");
    printf("este programa conta o número de valores negativos em um vetor\n"
           "\n\nprecione qualquer tecla para continuar");
    getch();
    int vetor[10];
    int i, resp;
    do
    {
        printf("\n\ndigite 10 valores: \n");
        for(i=0; i<10; i++)
        {
            printf("->");
            scanf("%d",&vetor[i]);
        }

        resp = contanegativos(vetor);
        printf("a quantidade de negativos = %d\n",resp);
        printf("\n\tse deseja continuar digite 1\n\tse nao digite 0\n\t->");
        scanf("%d",&resp);
    }
    while(resp==1);
    return 0;
}
