#include <stdio.h>
#include <stdlib.h>

int main()
{
 int nota;
 printf("digite a sua nota de 0 a 10: ");
 scanf("%d",&nota);

    switch (nota) {
        case 0 ... 4:
            printf("nota D");
            break;
        case 5 ... 6:
            printf("nota C");
            break;
        case 7 ... 8:
            printf("nota B");
            break;
        case 9 ... 10:
            printf("nota A");
            break;


    }
 return 0;
}
