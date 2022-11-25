#include <stdio.h>
#include <stdlib.h>


int idade(int anos, int meses, int dias){
    int iddemd;
    iddemd = anos * 365 + meses * 30 + dias;
    return(iddemd);
}
int main()
{
    int anos, meses, dias, iddemd;
    printf("digite a sua idade");
    printf("\nanos: ");
    scanf("%d",&anos);
    printf("meses:");
    scanf("%d",&meses);
    printf("dias:");
    scanf("%d",&dias);

    iddemd = idade(anos,meses,dias);

    printf("\nsua idade em dias e: %d\n\n\n",iddemd);

    return 0;
}
