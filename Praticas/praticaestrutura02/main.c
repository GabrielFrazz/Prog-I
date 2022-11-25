#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct informacoes{
char nome[51];
float notas[3];
}alunos;
int main()
{
    int t;
    printf("quantos alunos deseja registrar: ");
    scanf("%d",&t);
    alunos inf[t];
    int i,j;
    printf("\n\n\tdigite as informacoes dos alunos:\n");
    for(i=0;i<t;i++){
        printf("aluno %d:\n",i+1);
        printf("nome:");
        fflush(stdin);
        fgets(inf[i].nome,50,stdin);
        printf("\n\n\tdigite as notas: \n");
        for(j=0;j<3;j++){
            printf("nota %d:",i+1);
            scanf("%f",&inf[i].notas[j]);
        }
    }
    printf("\n\n\tas informacoes dos alunos:\n");
    for(i=0;i<t;i++){
        printf("\nnome: %s\n",inf[i].nome);
        printf("\n\n\tnotas\n");
        for(j=0;j<3;j++){
            printf("\nnota %d: %.2f",i+1,inf[i].notas[j]);
        }
    }
    return 0;
}
