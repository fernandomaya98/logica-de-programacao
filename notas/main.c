#include <stdio.h>

void main(void){

float n1, n2 ,n3, n4, n5,n6;
float media1, media2, media3;
scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);
media1 = (float)(n1+n2)/2;
media2 = (float)(n3+n4)/2;
media3 = (float)(media1+media2)/2;
printf("%.2f %.2f %.2f",media1, media2, media3);
if(media1>5){
    printf("passou");
}









}