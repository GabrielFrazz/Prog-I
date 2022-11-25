#include <stdio.h>
#include <string.h>

void copiaate(char destino[], char origem[], char parar)
{
    int i;

    for (i = 0; origem[i] != parar ; i++)
    {
        destino[i]=origem[i];
    }

    puts(destino);
}

int main()
{
    printf("este programa copia os caracteres de uma string para outra ate encontrar um determinado caracter\n"
           "\npressione qualquer tecla para continuar");
    getch();
    int tam;
    do
    {
        printf("\n\nquantos caracteres deseja digitar?\n->");
        scanf("%d",&tam);
        char txt[tam];
        char copytxt[tam];
        printf("\ndigite uma frase\n->");
        fflush(stdin);
        fgets(txt,tam,stdin);
        char a;
        printf("\ndigite o caracter de parada:\n->");
        fflush(stdin);
        scanf("%c", &a);
        printf("\nstring ate o caracter '%c':\n", a);
        copiaate(copytxt, txt, a);
        printf("\n\n\tse quiser continuar digite 1"
               "\n\tse nao, digite 0\n\t->");
        scanf("%d",&tam);
    }
    while(tam==1);
    return 0;
}
