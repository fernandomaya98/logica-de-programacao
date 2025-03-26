#include <stdio.h>

void main(){
    char nome1[20], nome2[20], nome3[20];
    int idade1, idade2, idade3;
    float peso1, peso2, peso3;
    float media_idade, media_peso;

    printf("digite o nome da pessoa 1\n");
    scanf("%s", &nome1);
    printf("digite o peso da pessoa 1\n");
    scanf("%f", &peso1);
    printf("digite a idade da pessoa 1\n");
    scanf("%d", &idade1);

    printf("digite o nome da pessoa 2\n");
    scanf("%s", &nome2);
    printf("digite o peso da pessoa 2\n");
    scanf("%f", &peso2);
    printf("digite a idade da pessoa 2\n");
    scanf("%d", &idade2);

    printf("digite o nome da pessoa 3\n");
    scanf("%s", &nome3);
    printf("digite o peso da pessoa 3\n");
    scanf("%f", &peso3);
    printf("digite a idade da pessoa 3\n");
    scanf("%d", &idade3);

    media_idade = (idade1 + idade2 + idade3)/3;
    media_peso = (peso1 + peso2+ peso3)/3;

    printf("%s\n", nome1);
    printf("%s\n", nome2);
    printf("%s\n", nome3);

    printf("a media das idades e igual a %.2f\n", media_idade);

    if(media_peso > 55){
        printf("o valor da media e %.2f e ultrapassa o limite", media_peso);
    }
    else{
        printf("o valor da media e %.2f e nao ultrapassa o limite", media_peso);
    }


    
    





}