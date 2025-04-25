#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char país1[10] = "Brasil", país2[11] = "Alemanha";
    char codigo1[12] = "A01", codigo2[13] = "B02";
    int População1 = 211141000;
    int População2 = 83280000;
    float Área1 = 8515770.0;
    float Área2 = 357580.0;
    float PIB1 = 2173.666;
    float PIB2 = 4525.704;
    int pontos_turisticos1 = 7;
    int pontos_turisticos2 = 6;
    float PIB_per_capita1 = PIB1 / (População1 / 1000000);
    float PIB_per_capita2 = PIB2 / (População2 / 1000000);
    float Densidade_populacional1 = (float)População1 / Área1;
    float Densidade_populacional2 = (float)População2 / Área2;
    int Primeiro_Atributo, Segundo_Atributo;
    int resultado1, resultado2;

    printf("\n=== Carta do jogador 1 ===\n");
    printf("País: %s\n", país1);
    printf("Código: %s\n", codigo1);
    printf("População: %d habitantes\n", População1);
    printf("Área: %.2f km²\n", Área1);
    printf("PIB: %.2f bilhões de dólares\n", PIB1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("PIB per capita: %.2f\n", PIB_per_capita1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_populacional1);

    printf("\n=== Carta do jogador 2 ===\n");
    printf("País: %s\n", país2);
    printf("Código: %s\n", codigo2);
    printf("População: %d habitantes\n", População2);
    printf("Área: %.2f km²\n", Área2);
    printf("PIB: %.2f bilhões de dólares\n", PIB2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("PIB per capita: %.2f\n", PIB_per_capita2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_populacional2);


    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - densidade Populacional\n");
    
    printf("Digite o número do atributo (1-5): ");
    scanf("%d", &Primeiro_Atributo);

    switch (Primeiro_Atributo)
    {
    case 1:
        printf("Você escolheu a opção população!\n");
        resultado1 = População1 > População2 ? 1:0;
        break;
    case 2:
        printf("Você escolheu a opção área!\n");
        resultado1 = Área1 > Área2 ? 1:0;
        break;
    case 3:
        printf("Você escolheu a opção PIB!\n");
        resultado1 = PIB1 > PIB2 ? 1:0;
        break;
    case 4:
        printf("Você escolheu a opção número de pontos turísticos!\n");
        resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1:0;
        break;  
    case 5:
        printf("Você escolheu a opção densidade populacional!\n");
        resultado1 = Densidade_populacional1 < Densidade_populacional2 ? 1:0;
        break;
    default:
      printf("Opção invalida\n");
        break;
    }

    printf("Escolha o segundo atributo para comparar:\n");
    printf("ATENÇÃO: VOCÊ DEVE ESCOLHER UM ATRIBUTO DIFERENTE DO PRIMEIRO.\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - densidade Populacional\n");
    
    printf("Digite o número do atributo (1-5): ");
    scanf("%d", &Segundo_Atributo);
    
    if (Primeiro_Atributo == Segundo_Atributo)
    {
        printf("Você escolheu o mesmo atributo!\n");
    } else {
        switch (Segundo_Atributo)
       {
       case 1:
           printf("Você escolheu a opção população!\n");
           resultado2 = População1 > População2 ? 1:0;
           break;
       case 2:
           printf("Você escolheu a opção área!\n");
           resultado2 = Área1 > Área2 ? 1:0;
           break;
       case 3:
           printf("Você escolheu a opção PIB!\n");
           resultado2 = PIB1 > PIB2 ? 1:0;
           break;
       case 4:
           printf("Você escolheu a opção número de pontos turísticos!\n");
           resultado2 = pontos_turisticos1 > pontos_turisticos2 ? 1:0;
           break;  
       case 5:
           printf("Você escolheu a opção densidade populacional!\n");
           resultado2 = Densidade_populacional1 < Densidade_populacional2 ? 1:0;
           break;
       default:
           printf("Opção invalida\n");
           break;
    }


    if (resultado1 && resultado2)
    {
      printf("Jogador 1 ganhou!\n");

    } else if (resultado1 != resultado2){
      printf("Empatou!\n");
    } else{
      printf("Jogador 2 ganhou!");
    }

    }
    return 0;
}