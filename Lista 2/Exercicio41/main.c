#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct coordenadas
{
    int x, y;
} ponto;

int main()
{
    int loop;
    ponto p1, p2;
    do
    {
        printf("esse programa le dois pontos e determina a distancia entre eles\n"
               "\npressione qualquer tecla para continuar");
        getchar();
        printf("\ndigite as cordenadas (x,y) dos pontos\n"
               "ponto 1:\n");
        printf("x->");
        scanf("%d", &p1.x);
        printf("y->");
        scanf("%d", &p1.y);
        printf("ponto 2: \n");
        printf("x->");
        scanf("%d", &p2.x);
        printf("y->");
        scanf("%d", &p2.y);
        float dist;
        dist = sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
        printf("\n\na distancia entre os pontos (%d,%d) e (%d,%d) = %.2f\n",p1.x,p1.y,p2.x,p2.y,dist);
        printf("\n\tse deseja continuar digite 1"
               "\n\tse nao, digite 0\n\t->");
        scanf("%d",&loop);
    }
    while(loop == 1);
    return 0;
}
