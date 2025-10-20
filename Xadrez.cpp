#include<stdio.h>
using namespace std;

int main()
{
    int torre =1 , bispo=1, rainha=1;
    printf("o movimento da torre é:\n");
    
    while (torre <= 5){
        printf("movimente a direita uma casa\n");
        torre++;
    }
   printf("o movimento do bispo é:\n");
    
   while (bispo <= 5){
        printf("para cima e direita\n");
        bispo++;
    }
   printf("o movimento da rainha é:\n");
    
   while (rainha <= 8){
        printf("movimente oito casas a esquerda\n");
        rainha++;
    }
   for (int cavalo =1 ; cavalo <= 1; cavalo++){
       
       int mov =1;
       printf("movimento cavalo e :\n");
       while (mov <=2){
       printf("baixo\n");
       mov++;
       }
       int mov1 = 1;
       
       while (mov1 <=1){
       printf("esquerda");
       mov1++;
       }
   }
    
    return 0;
}
