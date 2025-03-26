#include <stdio.h>

void main(void){

    float a, b, c;

    printf("qual a medida de a?\n");
    scanf("%f", &a);
    printf("qual a medida de b?\n");
    scanf("%f", &b);
    printf("qual a medida de c?\n");
    scanf("%f", &c);

    if(a,b,c == 0){
        printf("erro, nao e um triangulo");
    }
    else if(a + b <= c| a + c <= b | b + c <= a)
    {
        printf("erro, nao e um triangulo");
    }
    else if(a == b && b == c )
    {
        printf("e um triangulo equilatero");
    }
    else if(a == b || b == c || c == a)
    {
        printf("e um triangulo isoceles");
    }
    else
    {
        printf("e um triangulo escaleno");
    }
    
    



}