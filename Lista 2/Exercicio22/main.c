#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int i, j, tam, repeat;
    printf("\nesse programa contrói um triângulo no formato: ");
    printf("\n\t1");
    printf("\n\t12");
    printf("\n\t123");
    printf("\n\npressione qualquer tecla para continuar");
    getch();
    do{
    printf("\ndefina o tamanho da base:\n->");
    scanf("%d",&tam);

    for(i=1; i<=tam; i++){
        for(j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n\tse deseja continuar digite 1\n\tse nao digite 0\n\t->");

    scanf("%d", &repeat);

    }while(repeat == 1);

    return 0;
}
