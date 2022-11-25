#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero=0;
   printf("digite um valor inteiro: ");
   scanf("%d",&numero);


   if(numero % 10 == 0){
       numero = numero/2;
       printf("a metade e: %d",numero);
   }
   else{
       printf("o numero digitado nao termina com 0");
   }
   return 0;
}
