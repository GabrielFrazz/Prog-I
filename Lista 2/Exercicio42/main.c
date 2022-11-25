#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct jogadores
{
    int numero;
    float peso;
    float altura;
    char inicial;
} informacoes;

int main()
{
    printf("Esse programa le as informações de 11 jogadores e exibe: \n"
           "-todas as informacoes\n"
           "-a inicial do mais baixo\n"
           "-o numero do mais pesado\n"
           "\npressione qualquer tecla para continuar");
    getchar();
    printf("\ndigite as informacoes dos jogadores: ");
    int i;
    informacoes jogador[11];
    for(i=0; i<11; i++)
    {
        printf("\n\njogador %d: ",i+1);
        printf("\nnumero: ");
        scanf("%d",&jogador[i].numero);
        printf("\npeso: ");
        scanf("%f",&jogador[i].peso);
        printf("\ninicial: ");
        fflush(stdin);
        scanf("%c",&jogador[i].inicial);
        printf("\naltura: ");
        scanf("%f",&jogador[i].altura);
    }

    float mpesado, mbaixo;
    mpesado = jogador[0].peso;
    mbaixo = jogador[0].altura;
    int pesadao = jogador[0].numero;
    char baixinho;

    for(i=0; i<11; i++)
    {
        if(jogador[i].peso>mpesado)
        {
            mpesado = jogador[i].peso;
            pesadao = jogador[i].numero;
        }
        if(jogador[i].altura<mbaixo)
        {
            mbaixo = jogador[i].altura;
            baixinho = jogador[i].inicial;
        }
    }
    for(i=0; i<11; i++)
    {
        printf("\n\tjogador %d:",i+1);
        printf("\ninicial: %c"
               "\nnumero: %d"
               "\naltura: %.2f"
               "\npeso: %.2f"
               ,jogador[i].inicial,jogador[i].numero,jogador[i].altura,jogador[i].peso);
    }
    printf("\n\na inicial do jogador mais baixo e: %c",baixinho);
    printf("\no numero do jogador mais pesado e: %d",pesadao);

    return 0;
}
