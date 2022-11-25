#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 float raio, ar, per;
 printf("\n\tCalculadora de area e perimetro");
 printf("\nprimeiramente digite o raio do circulo: ");
 scanf("%f",&raio);
 ar = 3.14 * raio * raio;
 per = 2 * 3.14 * raio;
 printf("\nA area do circulo e: %.2f",ar);
 printf("\nO perimetro do circulo e: %.2f",per);
 return 0;

}
