#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 float hr, salario;
 printf("digite o numero de horas trabalhadas: ");
 scanf("%f",&hr);

 if(hr<40 && hr>0){
     salario = hr * 15;
     printf("o salario a ser recebido e: R$%.2f",salario);
 }
 else{
     salario = 600 + 40 * 15 + (hr-40) * 21;
     printf("o salario a ser recebido e: R$%.2f",salario);
 }

 return 0;
}
