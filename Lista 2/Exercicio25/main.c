#include <stdio.h>
#include <locale.h>

int maior(int vetor[])
{
    int i, maior;
    maior = vetor[0];
    for(i=0; i<10; i++)
    {
        if(vetor[i]>maior)
        {
            maior=vetor[i];
        }
    }
    return (maior);
}
int main()
{
    setlocale(LC_ALL, "");

    printf("Esse programa exibe o maior elemento de um vetor de 10 valores\n"
           "\npressione qualquer tecla para continuar");
           getch();

    int vet[10];
    int i;
    do{
    printf("\n\ndigite 10 valores\n");
    for(i=0; i<10; i++)
    {
        printf("->");
        scanf("%d",&vet[i]);
    }
    int resp;
    resp = maior(vet);
    printf("\no maior número digitado foi: %d\n",resp);

     printf("\n\tse deseja continuar digite 1\n\tse nao digite 0\n\t->");
     scanf("%d",&i);
    }while(i==1);
    return 0;
}
