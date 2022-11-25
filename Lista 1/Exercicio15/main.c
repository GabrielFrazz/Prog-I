#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, intervalo;

    printf("digite o primeiro valor: ");
    scanf("%d",&n1);

    printf("digite o segundo valor: ");
    scanf("%d",&n2);

    if(n1<n2){
        do{
            intervalo = n1++;
            printf("%d\n ",intervalo);
        }while(n1<=n2);
    }
    else if(n2<n1){
        do{
            intervalo = n1 --;
            printf("%d\n ",intervalo);
        }while(n2<=n1);
    }
    return 0;
}
