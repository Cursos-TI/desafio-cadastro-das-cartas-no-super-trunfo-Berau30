#include <stdio.h>

int main() {
   
    char estado1[10] = "Bahia", estado2[11] = "Manaus";
    char codigo1[12] = "A01", codigo2[13] = "B02";
    char nome1[14] = "Salvador", nome2[15] = "Manaus";
    
    int População1 = 29270052, População2 = 2196133;  
    float Área1 = 564733.0, Área2 = 1550.0;  
    float PIB1 = 439.8, PIB2 = 59.3;  
    int pontos_turisticos1 = 30, pontos_turisticos2 = 25;  

    
    float PIB_per_capita1 = PIB1 / População1;
    float PIB_per_capita2 = PIB2 / População2;
    float Densidade_populacional1 = População1 / Área1;
    float Densidade_populacional2 = População2 / Área2;

    
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d habitantes\n", População1);
    printf("Área: %.2f km²\n", Área1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("PIB per capita: %.2f\n", PIB_per_capita1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_populacional1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d habitantes\n", População2);
    printf("Área: %.2f km²\n", Área2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("PIB per capita: %.2f\n", PIB_per_capita2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_populacional2);

    printf("Vamos comparar a população!\n");
    if ( População1 > População2 )
    {
        printf("%s ganhou!\n", estado1);
    } else {
        printf("%s ganhou!\n", estado2);
    }

    printf("Vamos comparar a área!\n");
    if ( Área1 > Área2 )
    {
        printf("%s ganhou!\n", estado1);
    } else {
        printf("%s ganhou!\n", estado2);
    }
    
    printf("Vamos comparar o PIB!\n");
    if ( PIB1 > PIB2 )
    {
        printf("%s ganhou!\n", estado1);
    } else {
        printf("%s ganhou!\n", estado2);
    }

    printf("Vamos comparar os pontos turisticos!\n");
    if ( pontos_turisticos1 > pontos_turisticos2 )
    {
        printf("%s ganhou!\n", estado1);
    } else {
        printf("%s ganhou!\n", estado2);
    }
    
    printf("Vamos comparar o PIB per capital!\n");
    if ( PIB_per_capita1 > PIB_per_capita2 )
    {
        printf("%s ganhou!\n", estado1);
    } else {
        printf("%s ganhou!\n", estado2);
    }

    printf("Vamos comparar a Densidade populacional!\n");
    if ( Densidade_populacional1 < Densidade_populacional2 )
    {
        printf("%s ganhou!\n", estado1);
    } else {
        printf("%s ganhou!\n", estado2);
    }

    return 0;
}
