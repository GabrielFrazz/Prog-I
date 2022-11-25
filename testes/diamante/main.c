#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam;
    printf("digite o tamanho do diamante:");
    scanf("%d",&tam);
    int i, j,k;
    int qtd=1, esp;
    esp = (tam-1)/2;
    int pb=esp;
    for(i=1;i<=tam;i++){
        for(j=1;j<=esp;j++){
            printf("   ");
        }
        for(k=1;k<=qtd;k++){
            printf(" * ");
        }
        qtd=qtd+2;
        esp--;
        if(qtd==tam){
            i=tam++;
        }
        printf("\n\n");
    }
    for(i=1;i<=pb;i++){
        if(i==1){
        qtd = qtd - 2;
        esp = esp + 1;
        }
        qtd = qtd - 2;
        esp = esp + 1;
        for(j=1;j<=esp;j++){
            printf("   ");
        }
        for(k=1;k<=qtd;k++){
            printf(" * ");
        }
        printf("\n\n");
    }

    return 0;
}

