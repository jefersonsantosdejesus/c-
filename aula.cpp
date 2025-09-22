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
    printf("NOME DA CIDADE:%s\n", cidade);
    printf("POPULAÇÃO:%d\n",  populacao);
    printf("ÁREA:%.2f km²\n", area);  \
    printf("PIB:.%.2f\n", pib);
    printf("NUMERO DOS PONTOS TURISTICOS:%d\n", ponto);



    char estado1 [9];
    char codigo1[6];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int ponto1;

    printf ("digite o estado ");
    scanf ("%s", estado1);
    printf("digite o codigo");
    scanf("%s", codigo1);
    printf("digite a cidade");
    scanf("%s", cidade1);
    printf("digite o população");
    scanf("%d", &populacao1);
    printf("digite a area");
    scanf("%f", &area1);
    printf("digite o pib da sua cidade");
    scanf("%f", &pib1);
    printf("digite o pontos turisticos em numeros");
    scanf("%d", &ponto1);

    printf("Carta 2:");
    printf("ESTADO:%s\n", estado1);
    printf("CODIGO:%s\n", codigo1);
    printf("NOME DA CIDADE:%s\n", cidade1);
    printf("POPULAÇÃO:%d\n",  populacao1);
    printf("ÁREA: %.2f km²\n", area1);  \
    printf("PIB:.%.2f\n", pib1);
    printf("NUMERO DOS PONTOS TURISTICOS:%d\n", ponto1);

    /*%d: Imprime um inteiro no formato decimal.
     
    %i: Equivalente a %d.
     
    %f: Imprime um número de ponto flutuante no formato padrão.
     
    %e: Imprime um número de ponto flutuante na notação científica.
     
    %c: Imprime um único caractere.
     
    %s: Imprime uma cadeia (string) de caracteres.*/



    return 0; 
}
