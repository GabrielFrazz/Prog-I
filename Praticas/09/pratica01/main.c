#include <stdio.h>
#include <stdlib.h>
int contaimpar(int n1, int n2){
int i,cont=0;
if(i%2 = 1){
for(i=n1; i<=n2; i++){
        cont++;
}
    }
    else{
            for(i=n2; i<=n1; i++){
        cont--;

    }
}
return (cont);
}
int main()

{
    int x, y, result;
    printf("digite o primeiro inteiro: \n");
    scanf("%d",&x);
    printf("digite o segundo inteiro: \n");
    scanf("%d",&y);

    result = contaimpar(x,y);
    printf("%d",result);
    return 0;
}
