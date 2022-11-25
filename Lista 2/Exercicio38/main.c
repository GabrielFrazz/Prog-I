#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("esse programa le uma quantidade indefinida de valores e retorna a quantidade de pares e impares\n"
           "\npressione qualquer tecla para continuar\n");
           getch();
           int i;
           do{
           int pares=0, impares = 0;
           int *x = (int *)malloc(sizeof(int));
    printf("\ndigite quantos numeros quiser, o programa encerra a leitura quando 0 e digitado\n");
    int endloop=1;
    for(;endloop!=0;){
        printf("->");
        scanf("%d",&x[0]);
        if(x[0]%2==0 && x[0]!=0){
            pares++;
        }
        else if(x[0]%2!=0){
            impares++;
        }
        if(x[0]==0){
            endloop=0;
        }
        free(x);
        x=(int *)malloc(sizeof(int));

    }

    printf("o numero de pares = %d\n",pares);
    printf("o numero de impares = %d",impares);

    free(x);
    printf("\n\n\tse deseja continuar digite 1"
           "\n\tse nao, digite 0\n\t->");
           scanf("%d",&i);
    }while(i==1);
    return 0;
}
