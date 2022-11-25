#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1, c2, c3;
    printf("digite o primeiro caractere!!!");
    fflush(stdin);
    scanf("%c",&c1);
    printf("o c1 e:%c",c1);
    printf("\ndigite o segundo caractere!!!");
    fflush(stdin);
    scanf("%c",&c2);
    printf("\no c2 e:%c",c2);
    printf("\n o terceiro caractere!!!");
    fflush(stdin);
    scanf("%c",c3);
    printf("\no c3 e:%c",c3);
    return 0;
}
