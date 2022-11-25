#include <stdio.h>
#include <string.h>

int cont(char str[],char c)
{
    int i, conta=0;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==c)
        {
            conta++;
        }
    }
    return (conta);
}
int main()
{
    printf("este programa conta o numero de vezes que um determinado caracter aparece em uma palavra/frase \n"
           "\npressione qualquer tecla para continuar");
    getch();

    int tam;
    do
    {
        printf("\n\nquantos caracteres deseja digitar? ");
        printf("\n->");
        scanf("%d",&tam);
        char texto[tam];
        printf("digite a palavra/frase:\n");
        printf("->");
        fflush(stdin);
        scanf("%[^\n]s",texto);
        char a;
        printf("digite o caracter que deseja verificar:");
        printf("\n->");
        fflush(stdin);
        scanf("%c",&a);
        int resp;
        resp = cont(texto,a);
        printf("\n O caracter '%c' aparece %d vezes",a,resp);
        printf("\n\n\tse quiser continuar digite 1"
               "\n\tse nao, digite 0\n\t->");
        scanf("%d",&tam);
    }
    while(tam==1);
    return 0;
}
