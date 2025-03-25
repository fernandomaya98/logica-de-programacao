#include <stdio.h>

void main(void)
{

    int n1, n2;
    scanf("%d %d", &n1, &n2);
    if (n1 > n2)
    {
        printf("N1(%d) e maior que N2(%d)", n1, n2);
    }
    else if (n2 > n1)
    {
        printf("N2(%d) e maior que N1(%d)", n2, n1);
    }
    else
    {
        printf("N1(%d) e igual a N2(%d)", n1, n2);
    }
}
