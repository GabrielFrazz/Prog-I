#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anos=0;
    float ze = 1.30, chico = 1.50;
    do{
    ze = ze + 0.03;
    chico = chico + 0.02;
    anos = anos + 1;
    printf("\n\tano %d:",anos);
     printf("\nZe %.2f\n",ze);
    printf("chico %.2f\n",chico);
    }while(chico>ze);
    printf("\n\tforam necessarios %d anos para ze ficar maior do que chico.\n",anos);
    return 0;
}
