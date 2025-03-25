#include <stdio.h>

void main(void)
{
    int numero_irmao, vencimento, material;
    float valor_final, preco;
    float matricula = 200.0;
    printf("sera necessario material didatico?\n");
    printf("1 - sim\n");
    printf("2 - nao\n");
    scanf("%d", &material);

    if(material == 1)
    {
        preco = (matricula + 50.0);
    }
    else
    {
        preco = 200.0;
    }
    
    printf("tem quantos irmaos?\n");
    printf("1 - um\n");
    printf("2 - mais de um\n");
    printf("0 - nenhum\n");
    printf("escolha 1, 2 ou 3:\n");
    scanf("%d", &numero_irmao);

    if(numero_irmao == 1)
    {
        preco = (preco - 30.0);
    }
    else if(numero_irmao == 2)
    {
        preco = (preco - 25.0);
    }

    printf("a matricula sera paga antes do vencimento?\n");
    printf("1 - sim\n");
    printf("2 - nao\n");
    printf("escolha 1 ou 2:\n");
    scanf("%d", &vencimento);

    if(vencimento == 1)
    {
        preco = (preco *0.9);
    }
  
    printf("o valor final sera: %.2f", preco);

}