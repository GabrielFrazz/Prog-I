#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nota;
   printf("digite a sua nota: ");
   scanf("%d",&nota);


   if(nota>=60 && nota<=100){
       printf("voce foi APROVADO.");
   }
   else if(nota<60 && nota>0){
       printf("voce foi REPROVADO.");
   }
   else {
       printf("nota invalida");
   }
   return 0;
}
