#include <stdio.h>

void main(void)
{
    int soma, subtracao, escolha;
    float n1, n2, divisao;
    printf("escolha dois numeros\n");
    scanf("%f %f", &n1, &n2);
    printf("1 - soma dos numeros\n");
    printf("2 - subtracao do maior pelo menor\n");
    printf("3 - divisao do primeiro pelo segundo\n");
    printf("escolha o que deseja fazer: 1,2,3.\n");
    scanf("%d", &escolha);

    soma = n1 + n2;
    divisao = n1/n2;
    if(n1>n2){
        subtracao = n1 - n2;
    }
    else{
        subtracao = n2 - n1;
    }

    if(escolha == 1){
        printf("a soma dos dois numeros e igual a: %.2d", soma);
    }
    else if(escolha == 2){
        printf("a subtracao e igual a: %.2d", subtracao);
    }
    else if(escolha == 3){
        printf("a divisao e igual a: %.2f", divisao);
    }
    else{
        printf("erro");
    }


    


}