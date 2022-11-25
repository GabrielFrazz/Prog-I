#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5];
    int i;
    printf("digite 5 velores.");

    for(i=0;i<5;i++){
        printf("type: ");
        scanf("%d",&vet[i]);
    }
    float menor=vet[i];
    int pmenor =0;
    for(i=0;i<5;i++){
        if(vet[i]<menor){
                menor = vet[i];
            printf("o menor valor e: %d",&menor);
        }
    }
    return 0;

}
