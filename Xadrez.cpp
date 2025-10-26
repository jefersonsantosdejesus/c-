#include<stdio.h>
using namespace std;

void torre(int t){
    if (t>0){
    printf("movimente a direita uma casa\n");
    torre(t-1);
    }
}

void bispo(int b){
    if (b>0){
        printf("para cima e direita\n");
        bispo(b-1);
    }
}
void rainha(int r){
    if (r > 0){
        printf("movimente oito casas a esquerda\n");
        rainha(r-1);
    }
}
int main(){
    int torrem = 5;
    printf("o movimento da torre é:\n");
    torre(torrem);
    printf("o movimento do bispo é:\n");
    int bispom = 5;
    bispo(bispom);
    printf("o movimento da rainha é:\n");
    int rainham =8;
    rainha(rainham);
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
