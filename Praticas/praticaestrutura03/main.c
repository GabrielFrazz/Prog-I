#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct informacoes{
char nome[51];
float notas[3];
}alunos;

alunos* dinamica(int tamanho){
alunos *inf;
inf = malloc(tamanho * sizeof(alunos));
return (inf);
}

void imprime(alunos *inf,int t){
    int i, j;
printf("\n\tdigite as informacoes dos alunos\n");
for(i=0;i<t;i++){
        printf("\naluno %d:\n",i+1);
        printf("nome:");
        fflush(stdin);
        fgets(inf[i].nome,50,stdin);
        printf("\n\n\tdigite as notas: \n");
        for(j=0;j<3;j++){
            printf("nota %d:",j+1);
            scanf("%f",&inf[i].notas[j]);
        }
    }
    printf("\n\n\tas informacoes dos alunos:\n");
    for(i=0;i<t;i++){
        printf("\nnome: %s\n",inf[i].nome);
        printf("\n\n\tnotas\n");
        for(j=0;j<3;j++){
            printf("\nnota %d: %.2f",j+1,inf[i].notas[j]);
        }
    }
}
int main()
{
    int t;
    alunos *inf;
    printf("quantos alunos deseja registrar: ");
    scanf("%d",&t);
    inf = dinamica(t);
    imprime(inf,t);
    return 0;
}
