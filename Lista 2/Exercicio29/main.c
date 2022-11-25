#include <stdio.h>

int ultima(char string[], char c)
{
    int i, pos = -1;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == c)
        {
            pos = i+1;
        }

    }
    return (pos);
}

int main()
{
    printf("Este programa exibe a ultima posicao de um caracter em uma determinada palavra/frase\n"
           "Caso o caracter nao esteja na frase o programa exibe -1\n"
           "\npressione qualquer tecla para continuar");
    getch();

    int tam;
    do
    {
        printf("\n\nquantos caracteres deseja digitar? ");
        printf("\n->");
        scanf("%d", &tam);
        char texto[tam];
        printf("digite a palavra/frase\n");
        printf("->");
        fflush(stdin);
        scanf("%[^\n]s", texto);
        char a;
        printf("digite o caracter que deseja verificar:");
        printf("\n->");
        fflush(stdin);
        scanf("%c", &a);
        int resp;
        resp = ultima(texto, a);
        if (resp >= 0)
        {
            printf("a posicao do caracter e: %d", resp);
        }
        else
        {
            printf("%d\n", resp);
            printf("o caracter nao esta na string");
        }
        printf("\n\n\tse quiser continuar digite 1"
               "\n\tse nao, digite 0\n\t->");
        scanf("%d",&tam);
    }
    while(tam==1);
    return 0;
}
