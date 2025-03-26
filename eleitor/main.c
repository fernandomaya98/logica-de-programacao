#include <stdio.h>

void main(void){

    int idade;
    printf("qual a sua idade?\n");
    scanf("%d", &idade);
    if(idade>=18 && idade<70){
        printf("obrigatorio");
    }
    else if(idade<16){
        printf("nao eleitor");
    }
    else{
        printf("opcional");
    }





}