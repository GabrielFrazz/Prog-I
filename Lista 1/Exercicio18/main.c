#include <stdio.h>
#include <stdlib.h>

float vol_esf(float raio){
    float vol;
    vol = (float)4/3*3.14*(raio*raio*raio);
    return(vol);
}
int main(){
    float raio, result;
    printf("digite o raio da esfera: ");
    scanf("%f",&raio);

    result = vol_esf(raio);

    printf("\no volume da esfera e de: %.2f\n\n",result);

}
