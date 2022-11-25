#include <stdio.h>

int contabranco(char string[])
{
    int i, conta = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ' )
        {
            conta++;
        }

    }
    return (conta);
}

int main()
{
    printf("Este programa conta o numero de espacos em uma frase\n"
           "\npressione qualquer tecla para continuar");
    getch();
    int tam;
    do
    {
        printf("\n\nquantos caracteres deseja digitar? ");
        printf("\n->");
        scanf("%d", &tam);
        char texto[tam];
        printf("digite uma frase\n");
        printf("->");
        fflush(stdin);
        scanf("%[^\n]s", texto);
        int resp;
        resp = contabranco(texto);

        printf("\no numero de espacos e = %d", resp);
        printf("\n\n\tse quiser continuar digite 1"
               "\n\tse nao, digite 0\n\t->");
        scanf("%d",&tam);
    }
    while(tam==1);
    return 0;
}
