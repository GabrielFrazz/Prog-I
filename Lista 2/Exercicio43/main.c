#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct veiculos_est
{
    char nome[101];
    char placa[8];
    char cor[21];
    char turno;
} veiculos;

void leitura(veiculos *vet, int *tam)
{
    int i, loop=1, cont=0;
    printf("\ndigite as informacoes dos veiculos:\n"
           "\tao final de cada leitura, digite 1 para continuar ou 0 para parar");

    for(i=0; i<*tam; i++)
    {
        if(loop==1)
        {
            printf("\n\nveiculo %d:\n", i + 1);
            printf("nome: ");
            fflush(stdin);
            fgets(vet[i].nome, 100, stdin);
            printf("cor: ");
            fflush(stdin);
            fgets(vet[i].cor, 20, stdin);
            printf("placa: ");
            fflush(stdin);
            fgets(vet[i].placa, 7, stdin);
            printf("turno: ");
            fflush(stdin);
            scanf("%c", &vet[i].turno);
            printf("\ncontinuar -1- parar -0-\n->");
            scanf("%d", &loop);
            cont++;
        }
        else if(loop==0)
        {
            i=*tam;
        }
    }
    *tam = cont;
}

void imprecao(veiculos *vet, int *tam)
{
    int i;
    printf("\nas informacoes digitadas foram: \n");
    for(i=0; i<*tam; i++)
    {
        printf("\n\tveiculo %d:\n",i+1);
        printf("nome: %s"
               "cor: %s"
               "placa: %s"
               "\nturno: %c",vet[i].nome,vet[i].cor,vet[i].placa,vet[i].turno);
    }
}

int main()
{
    printf("Esse programa faz o cadastro de no maximo 100 veiculos\n"
           "no final o progrma exibe todas as informacoes dos cadastros\n"
           "\npressione qualquer tecla para continuar");
    getchar();
    veiculos x[100];
    int tam;
    tam =100;
    leitura(x,&tam);
    imprecao(x,&tam);

}
