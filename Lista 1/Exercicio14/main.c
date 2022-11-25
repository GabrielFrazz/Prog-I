#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\tEsse programa calcula a media de numeros inteiros positivos.");
    printf("\n\tDigite quantos numeros desejar, caso queira parar digite um valor negativo.");
    printf("\n\tESTE VALOR NAO CONTARA NO RESULTADO FINAL");
    int n;
    float media, soma=0, ni=0;
    do{
        printf("\ndigite um valor inteiro positivo: ");
        scanf("%d",&n);
        if(n>=0){
            soma=soma+n;
            ni++;
        }
    } while (n>=0);
    media=soma/ni;
    printf("\n\tA media obtida foi %.2f", media);
    return 0;
}
