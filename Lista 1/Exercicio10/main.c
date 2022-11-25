#include <stdio.h>
#include <stdlib.h>

int main()
{
 float p1, p2, media, tr;
 int falt;

 printf("nota da primeira prova: ");
 scanf("%f",&p1);

 printf("nota da segunda prova: ");
 scanf("%f",&p2);

 printf("nota do trabalho: ");
 scanf("%f",&tr);

 printf("numero de faltas: ");
 scanf("%d",&falt);

 media = (3*p1+5*p2+2*tr)/10;

 if(falt>15){
     printf("voce foi REPROVADO");
 }
 else if(falt <= 15 && media > 6){
     printf("a media obtida foi: %.2f\n",media);
     printf("voce foi APROVADO!");
 }
 else if(falt <= 15 && media < 6){
     printf("a media obtida foi: %.2f\n",media);
     printf("sua media foi inferior a 6, portanto tera que fazer a prova final");
 }

 return 0;
}
