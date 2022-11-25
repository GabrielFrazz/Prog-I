#include <stdio.h>
#include <stdlib.h>

typedef struct pesoaltura
{
    float peso;
    float altura;
} pessoa;

int main()
{
    printf("Esse programa atribui instrucoes de peso e altura para duas pessoas e calcula a media de cada uma dessas medidas\n"
           "\n\tpressione qualquer tecla para continuar");
    getchar();
    pessoa joao, maria;
    joao.altura = 1.90;
    joao.peso=98;
    maria.altura = 1.50;
    maria.peso=55;
    printf("\no peso e altura de joao sao: %.2fkg e %.2fm\n",joao.peso, joao.altura);
    printf("o peso e altura de maria sao: %.2fkg e %.2fm",maria.peso, maria.altura);
    joao.altura = 1.78;
    maria.peso = 75;
    printf("\n\napos as novas instrucoes: \n");
    printf("\no peso e altura de joao sao: %.2fkg e %.2fm\n",joao.peso, joao.altura);
    printf("o peso e altura de maria sao: %.2fkg e %.2fm",maria.peso, maria.altura);
    float media_altura, media_peso;

    media_altura = (joao.altura+maria.altura)/(float)2;
    media_peso = (joao.peso + maria.peso)/(float)2;

    printf("\n\na media dos pesos foi: %.2f"
           "\na media das alturas foi: %.2f",media_peso, media_altura);

    return 0;
}
