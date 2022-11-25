#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam;
    printf("-->");
    scanf("%d",&tam);

    int arr[tam][tam];

    int i, j;
    int sum=0;

    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("\n-->");
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            sum = sum + arr[i][j];
        }
    }
    printf("\n%d",sum);
    return 0;

}