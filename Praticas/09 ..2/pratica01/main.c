#include <stdio.h>
#include <stdlib.h>

int fatorial(int x){
int n, result=1;
for(x=1; x<=n;x++);{
    result = result * x;
}
return (result);
 }

int main()
{
    int y, result;
    printf("digite um valor:");
    scanf("%d",&y);

    result = fatorial(y);
    printf("o fatorial de %d e = %d",y,result);

    return 0;
}
