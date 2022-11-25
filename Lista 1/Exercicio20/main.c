#include <stdio.h>
#include <stdlib.h>

float soma_frac(int n){
    int den=0;
    float S=0;
    do{
        den=den+1;
        S = S +(1/(float)den);
    }while(den<n);
    return(S);
}

int main()
{
    int n;
    float result;
    printf("digite um valor: ");
    scanf("%d",&n);

    result= soma_frac(n);
    printf("o resultado e: %.2f",result);
    return 0;
}
