#include <stdio.h>
int main(){
    char estado [9];
    char codigo[6];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int ponto;

    printf ("digite o estado ");
    scanf ("%s", estado);
    printf("digite o codigo");
    scanf("%s", codigo);
    printf("digite a cidade");
    scanf("%s", cidade);
    printf("digite o população");
    scanf("%d", &populacao);
    printf("digite a area");
    scanf("%f", &area);
    printf("digite o pib da sua cidade");
    scanf("%f", &pib);
    printf("digite o pontos turisticos em numeros");
    scanf("%d", &ponto);

    printf("Carta 1:");
    printf("ESTADO:%s\n", estado);
    printf("CODIGO:%s\n", codigo);
    printf("NOME DA CIDADE:%s\n", cidade ,"KM");
    printf("POPULAÇÃO:%d\n",  populacao);
    printf("ÁREA:%.2f\n", area);  \
    printf("PIB:.%.2f\n", pib);
    printf("NUMERO DOS PONTOS TURISTICOS:%d\n", ponto);




    printf ("digite o estado ");
    scanf ("%s", estado);
    printf("digite o codigo");
    scanf("%s", codigo);
    printf("digite a cidade");
    scanf("%s", cidade);
    printf("digite o população");
    scanf("%d", &populacao);
    printf("digite a area");
    scanf("%f", &area);
    printf("digite o pib da sua cidade");
    scanf("%f", &pib);
    printf("digite o pontos turisticos em numeros");
    scanf("%d", &ponto);

    printf("Carta 2:");
    printf("ESTADO:%s\n", estado);
    printf("CODIGO:%s\n", codigo);
    printf("NOME DA CIDADE:%s\n", cidade ,"KM");
    printf("POPULAÇÃO:%d\n",  populacao);
    printf("ÁREA:%.2f\n", area);  \
    printf("PIB:.%.2f\n", pib);
    printf("NUMERO DOS PONTOS TURISTICOS:%d\n", ponto);

    



    return 0; 
}
