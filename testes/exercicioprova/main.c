#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno_est
{
    char nome[101];
    float nota[3];
} aluno;

typedef struct disciplina_est
{
    int cod;
    char nome[101];
    aluno *vetal;
} disciplina;

aluno* dinamica_aluno(int tam)
{
    aluno *al;
    al = malloc(tam * sizeof(aluno));
    return (al);
}

disciplina* dinamica_disciplina(int tam)
{
    disciplina *dic;
    dic = malloc(tam * sizeof(disciplina));
    return(dic);
}

void leitura (aluno *vet_al, disciplina *vet_dic, int tam_dic,int tam_al)
{
    int i, j,k;
    printf("\ndigite as informacoes da diciplina: \n");
    for(i=0; i<tam_dic; i++)
    {
        printf("\ndiciplina %d\n",i+1);
        printf("codigo: ");
        scanf("%d",&vet_dic[i].cod);
        printf("nome: ");
        fflush(stdin);
        fgets(vet_dic[i].nome,100,stdin);
        vet_al = dinamica_aluno(tam_al);
        vet_dic[i].vetal = vet_al;
        printf("digite as informacoes dos alunos: \n");
        for(j=0; j<tam_al; j++)
        {
            printf("nome: ");
            fflush(stdin);
            fgets(vet_dic[i].vetal[j].nome,100,stdin);
            for(k=0; k<3; k++)
            {
                printf("\nnota %d: ",k+1);
                scanf("%f",&vet_dic[i].vetal[j].nota[k]);
            }
        }
    }
}
void maior_nota(disciplina *vet_dic, int tam_dic,int tam_al)
{
    int i, j, k;
    int maior;
    char resp[101];
    maior = -1;
    for(i=0; i<tam_dic; i++)
    {
        for(j=0; j<tam_al; j++)
        {
            for(k=0; k<3; k++)
                if(vet_dic[i].vetal[j].nota[k]>maior)
                {
                    maior = vet_dic[i].vetal[j].nota[k];
                    strcpy(resp,vet_dic[i].vetal[j].nome);
                }
        }

    }
    printf("a pessoa com maior nota foi: ");
    puts(resp);
}

void imprime(int t_dic, int t_al, disciplina *vet_dic)
{
    int i, j,k;
    char *resp;
    printf("as informacoes digitadas foram: ");
    for(i=0; i<t_dic; i++)
    {
        printf("\n\n\t-%s  cod: %d\n",vet_dic[i].nome,vet_dic[i].cod);
        for(j=0; j<t_al; j++)
        {
            printf("\naluno %d",j+1);
            printf("\nnome: %s",vet_dic[i].vetal[j].nome);
            printf("\n\tnotas\n");
            for(k=0; k<3; k++)
            {
                printf("\nnota %d: %.2f",k+1,vet_dic[i].vetal[j].nota[k]);
            }
        }
    }
    maior_nota(vet_dic,t_dic,t_al);
}

int main()
{
    int t, t_al;
    printf("quantas disciplinas deseja registrar: ");
    scanf("%d",&t);
    printf("quantos alunos por diciplina? ");
    scanf("%d",&t_al);
    disciplina *x;
    aluno *y;
    x = dinamica_disciplina(t);
    leitura(y,x,t,t_al);
    imprime(t,t_al,x);
    free(x);
    free(y);
    return 0;
}
