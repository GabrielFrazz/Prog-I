#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Esse programa exibe de um espaco de memoria alocado para 10 valores:"
           "\n-os enderecos de memoria de cada posicao"
           "\n-os valores contidos nesses enderecos\n"
           "\npressione qualquer tecla para continuar");
    getch();
    int i;
    do
    {
        int *vet;
        vet = (int *)malloc(10 * sizeof(int));
        printf("\n\ndigite 10 valores inteiros\n");
        for(i=0; i<10; i++)
        {
            printf("->");
            scanf("%d",&vet[i]);
        }
        int conta=1;
        for(i=0; i<10; i++)
        {

            printf("o endereco de memoria do %d valor e: %x\n",conta, &vet[i]);
            printf("o valor contido nesse endereco e: %d\n\n",*&vet[i]);
            conta++;
        }
        free(vet);
        printf("\n\n\tse quiser continuar digite 1"
               "\n\tse nao, digite 0\n\t->");
        scanf("%d",&i);

    }
    while(i==1);
    return 0;
}
