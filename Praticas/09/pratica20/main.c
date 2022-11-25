#include <stdio.h>

void leitura(){
    int tam;
    printf("digite a quantidade de numeros: ");
    scanf("%d",&tam);
    int vet[tam];
    int i;
    for(i=0;i<tam;i++) {

        printf("\ndigite os valores desejados: ");
        scanf("&d", &vet[i]);
    }
    for(i=0;i<tam;i++){
        if(i%2==0){
            printf("\nos valores que estão nas posições pares são: %d",vet[i]);
            }
    }

}
int main() {

    leitura();
return 0;

}
