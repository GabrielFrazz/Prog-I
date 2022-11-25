#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, soma, multi;
    float media, div;

    printf("digite o primeiro valor (de 1 a 10): ");
    scanf("%d",&A);

    printf("digite o segundo valor (de 1 a 10): ");
    scanf("%d",&B);

    soma = A + B;

    switch (soma) {
    case 1 ... 7:
        media = soma/2;
        printf("a media dos numeros e: %.2f",media);
        break;

    case 8:
        multi = A * B;
        printf("o produto dos numeros e: %d",multi);
        break;

    case 9 ... 20:
        if(B<A) {
            div = (float)A/B;
            printf("a divisao e: %.2f",div);
        }
        else if(B>A){
            div = (float)B/A;
            printf("a divisao e: %.2f",div);
        }
        break;
    }
    return 0;

}
