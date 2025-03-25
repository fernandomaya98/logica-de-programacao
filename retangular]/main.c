#include <stdio.h>

int main()
{
    float comprimento, largura, area, preco, tinta;
    
    printf("qual o comprimento em metros?\n");
    scanf("%f",&comprimento);

    printf("qual a largura em metros?\n");
    scanf("%f", &largura);

    area = comprimento*largura;

    printf("qual o tipo de tinta desejada?\n");
    printf("1 - Tinta acrilica (10xm2)\n");
    printf("2 - Tinta lavavel (15xm2)\n");
    printf("digite a opcao (1 ou 2); \n");
    scanf("%f", &tinta);

    if(tinta==1)
    {
        preco = area*10;
    }
    else if(tinta==2)
    {
        preco = area*15;
    }
    else{
        printf("opcao invalida, tente novamente\n");
    }
    

    printf("area a ser coberta: %.2f\n", area);
    printf("valor a ser pago: %.2f\n", preco);
    
    
}