#include <stdio.h>

void main(void)
{

    int n1, n2;
    scanf("%d %d", &n1, &n2);
    if (n1 == 0 && n2 == 0)
    {
        printf("erro");
    }
    else if (n1 > 0 && n2 > 0)
    {
        printf("2 positivos");
    }
    else if (n1 < 0 && n2 < 0)
    {
        printf("2 negativos");
    }
    else
    {
        printf("1 positivo e 1 negativo");
    }
}