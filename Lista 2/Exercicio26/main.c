#include <stdio.h>
int pertence(int vetor[],int x)
{
    int i, pert=0;
    for(i=0; i<10; i++)
    {
        if(vetor[i]==x)
        {
            pert = 1;
        }
    }
    return (pert);
}
int main()
{
    printf("Esse programa dado um vetor de tamanho 10 e um determinado retorna:"
           "\n1 - se o numero esta no vetor"
           "\n0 - se o numero nao esta no vetor"
           "\n\npressione qualquer tecla para continuar");
    getch();
    int i, y;
    do
    {
        int vet[10];
        printf("\n\ndigite 10 valores\n");
        for(i=0; i<10; i++)
        {
            printf("->");
            scanf("%d",&vet[i]);
        }
        printf("digite o valor que vai ser analisado: \n->");
        scanf("%d",&y);
        int resp;
        resp = pertence(vet,y);
        printf("\n\t - %d -",resp);
        printf("\n\n\tse deseja continuar digite 1\n\tse nao digite 0\n\t->");
        scanf("%d",&i);
    }
    while(i==1);
    return 0;
}
