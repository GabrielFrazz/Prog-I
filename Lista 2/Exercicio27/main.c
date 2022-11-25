#include <stdio.h>
float media(int vetor[])
{
    int i, soma=0;
    float media;
    for(i=0; i<10; i++)
    {
        soma = soma + vetor[i];
    }
    media = (float )soma/10;
    return (media);
}
int main()
{
    printf("Esse programa calcula a media aritmetica de 10 valores\n"
           "\npressione qualquer tecla para continuar");
    getch();
    int i;
    do
    {
        int vet[10];
        printf("\n\ndigite os 10 valores: \n");
        for(i=0; i<10; i++)
        {
            printf("->");
            scanf("%d",&vet[i]);
        }
        float resp;
        resp = media(vet);
        printf("\nA media e: %.2f",resp);
        printf("\n\n\tse quiser continuar digite 1"
               "\n\tse nao, digite 0\n\t->");
        scanf("%d",&i);
    }
    while(i==1);

    return 0;
}
