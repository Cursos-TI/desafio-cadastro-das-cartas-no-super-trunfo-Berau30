#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char país1[10] = "Brasil", país2[11] = "Alemanha";
    char codigo1[12] = "A01", codigo2[13] = "B02";
    
    int População1 = 212000000; 
    int População2 = 83027046;  
    float Área1 = 8515767.0;   
    float Área2 = 357022.0;    
    float PIB1 = 2170000000000.0; 
    float PIB2 = 3949549000000.0;
    int pontos_turisticos1 = 10;
    int pontos_turisticos2 = 10;
    int País_do_jogador, País_do_computador;
    int atributo;
    
    float PIB_per_capita1 = PIB1 / População1;
    float PIB_per_capita2 = PIB2 / População2;
    float Densidade_populacional1 = População1 / Área1;
    float Densidade_populacional2 = População2 / Área2;
    
    printf("\n=== Carta do jogador 1 ===\n");
    printf("País: %s\n", &país1);
    printf("Código: %s\n", &codigo1);
    printf("População: %d habitantes\n", &População1);
    printf("Área: %.2f km²\n", &Área1);
    printf("PIB: %.2f bilhões\n", &PIB1);
    printf("Pontos turísticos: %d\n", &pontos_turisticos1);
    printf("PIB per capita: %.2f\n", &PIB_per_capita1);
    printf("Densidade Populacional: %.2f hab/km²\n", &Densidade_populacional1);

    printf("\n=== Carta do jogador 2 ===\n");
    printf("País: %s\n", &país2);
    printf("Código: %s\n", &codigo2);
    printf("População: %d habitantes\n", &População2);
    printf("Área: %.2f km²\n", &Área2);
    printf("PIB: %.2f bilhões\n", &PIB2);
    printf("Pontos turísticos: %d\n", &pontos_turisticos2);
    printf("PIB per capita: %.2f\n", &PIB_per_capita2);
    printf("Densidade Populacional: %.2f hab/km²\n", &Densidade_populacional2);
    
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("\nDigite o número do atributo (1-5): ");
    scanf("%d", &atributo);

    switch (atributo)
    {
    case 1:
        if(População1 == População2)
        printf("Empate");
        else if (População1 > População2)
        {
            printf("Jogador 1 ganhou!");
        } else {
            printf("Jogador 2 ganhou!");
        }
        break;

    case 2:
        if (Área1 == Área2)
        {
            printf("Empate!");
        } else if (Área1 > Área2)
        {
            printf("Jogador 1 ganhou!");
        } else {
            printf("Jogador 2 ganhou!");
        }
        break;

    case 3:
        if (PIB1 == PIB2)
        {
            printf("Empate!");
        } else if (PIB1 > PIB2)
        {
            printf("Jogador 1 ganhou!");
        } else {
            printf("Jogador 2 ganhou!");
        }
        break;
    case 4:
        if (pontos_turisticos1 == pontos_turisticos2)
        {
            printf("Empate!");
        } else if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("Jogador 1 ganhou!");
        } else {
            printf("Jogador 2 ganhou!");
        }
        break;    
    case 5:
        if (Densidade_populacional1)
        {
            printf("Empate!");
        } else if (Densidade_populacional1 < Densidade_populacional2)
        {
            printf("Jogador 1 ganhou!");
        } else {
            printf("Jogador 2 ganhou!");
        }
        break;    
    
    
    default:
      printf("Opção invalida\n");
        break;
    }
    return 0;
}