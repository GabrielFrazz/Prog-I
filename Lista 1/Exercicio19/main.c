#include <stdio.h>
#include <stdlib.h>

void estacao(int dia, int mes){
    switch(mes){
        case 1 ... 2:
            printf("%d/%d e verao",dia,mes);
            break;
        case 3:
            if(dia<21){
                printf("%d/%d e verao",dia,mes);
            }
            else{
                printf("%d/%d e outono",dia,mes);
            }
            break;
        case 4 ... 5:
            printf("%d/%d e outono",dia,mes);
            break;
        case 6:
            if(dia<21){
                printf("%d/%d e outono",dia,mes);
            }
            else{
                printf("%d/%d e inverno",dia,mes);
            }
            break;
        case 7 ... 8:
            printf("%d/%d e inverno",dia,mes);
            break;
        case 9:
            if(dia<23){
                printf("%d/%d e inverno",dia,mes);
            }
            else{
                printf("%d/%d e primavera",dia,mes);
            }
            break;
        case 10 ... 11:
            printf("%d/%d e primavera",dia,mes);
            break;
        case 12:
            if(dia<21){
                printf("%d/%d e primavera",dia,mes);
            }
            else{
                printf("%d/%d e verao",dia,mes);
            }
            break;
    }
}

int main(void){
    int dia, mes;
    printf("digite o dia: ");
    scanf("%d",&dia);
    printf("digite o mes: ");
    scanf("%d",&mes);
    estacao(dia,mes);
    return 0;
}
