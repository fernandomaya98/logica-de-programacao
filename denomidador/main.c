#include <stdio.h>

void main(void)
{

        float denominador, numerador;
        float divisao;
        scanf("%f %f", &numerador, &denominador);
        divisao = numerador / denominador;
        if (denominador != 0)
        {
                printf("%.2f", divisao);
        }
        else
        {
                printf("denomidador nao pode ser zero");
        }
}
