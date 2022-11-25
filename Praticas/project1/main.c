#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int A, B, C, DELTA;
    printf("digite 3 valores inteiros:");
    scanf("%d%d%d",&A,&B,&C);
    DELTA = B*B-4*A*C;
    printf("o delta e:%d\n",DELTA);
    float R1, R2;
    R1 = (-B + sqrt(DELTA)) / 2.0*(float)A;
    R2 = (-B - sqrt(DELTA)) / 2.0*(float)A;
    printf("R1=%.2f",R1);
    printf("\nR2=%.2f",R2);
    return 0;

}
