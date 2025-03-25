#include <stdio.h>

void main()
{
    float compra;
    float desconto;
    printf("Qual foi o valor pago?\n");
    scanf("%f", &compra);
    desconto = compra*0.9;
    if(compra>100)
    {
        printf("Valor a ser pago: R$ %.2f", desconto);
    }
    else
    {
        printf("Valor a ser pago: R$ %.2f", compra);
    }
}
