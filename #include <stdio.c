#include <stdio.h>

int main(){
    // Jogo super trunfo// 
        // Carta1//
    char estado1[50];
    char cidade1[50];
    char carta1 [4];
    int populacao1;
    float area1;
    double PIB1;
    int pontos_turisticos1;
    float PIBPERCAPTA1;
    float superpoder1;

        //Carta2 //
    char estado2[50];
    char cidade2[50];
    char carta2[4];
    int populacao2;
    float area2;
    double PIB2; 
    int pontos_turisticos2;
    float PIBPERCAPTA2;
    float superpoder2;

    // CONTADORES //
    int vitorias1 = 0, vitorias2 = 0;

    // Entrada da carta 1 //
     
    printf("Bem vindo ao jogo SUPER TRUNFO \n");
    printf("Acrescente os dados da Carta 1 \n");
    printf("Acrescente o código da carta\n:");
    scanf("%s",&carta1);

    printf("Digite o nome do estado\n");
    scanf("%s",&estado1);

    printf("Digite o nome da cidade \n");
    scanf ("%s",&cidade1);

    printf("Digite a populacao\n");
    scanf ("%dmilhoes",&populacao1);

    printf("Digite o valor da area em km²\n");
    scanf ("%f",&area1);

    printf("Coloque o PIB em bilhoes\n");
    scanf("%fbilhoes",&PIB1);

    printf("Quantos pontos turisticos\n");
    scanf("%d",&pontos_turisticos1);

    //ENTRADA PARA CARTA 2 //

    
    printf("Acrescente os dados da Carta 2 \n");
    printf("Acrescente o código da carta \n:");
    scanf("%s",&carta2);

    printf("Digite o nome do estado\n");
    scanf("%s",&estado2);

    printf("Digite o nome da cidade \n");
    scanf ("%s",&cidade2);

    printf("Digite a populacao\n");
    scanf ("%d",&populacao2);

    printf("Digite o valor da area em km²\n");
    scanf ("%f",&area2);

    printf("Coloque o PIB em bilhoes\n");
    scanf("%f",&PIB2);
    
    printf("Quantos pontos turisticos\n");
    scanf("%d",&pontos_turisticos2);

    // CALCULANDO //
     float Densidade1 = populacao1 / area1;
     float Densidade2 = populacao2 / area2;
     float PIBPERCAPTA1 = PIB1 / populacao1;
     float PIBPERCAPTA2 = PIB2 / populacao2;

    superpoder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + Densidade1 + Densidade2 + PIBPERCAPTA1;
    superpoder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + Densidade2 + Densidade2 + PIBPERCAPTA2;
    

    //SAIDA DE DADOS DA CARTA 1 //

    printf("Carta1");
    printf("Codigo: %s\n",carta1);
    printf("Estado: %s\n",estado1);
    printf("Cidade: %s\n",cidade1);
    printf("Populacao:%d\n",populacao1);
    printf("Area: %f km²\n",area1);
    printf("PIB:%f bilhoes\n",PIB1);
    printf("Pontos turisticos: %d \n",pontos_turisticos1);
    printf("Densidade populacional :%.2f hab/km² \n", Densidade1);
    printf("PIB Percapita :%2f \n", PIBPERCAPTA1);
    printf("Super Poder :%2f \n",superpoder1);

    //SAIDA DE DADOS DA CARTA 2//

    printf("Carta2");
    printf("Codigo: %s\n",carta2);
    printf("Estado: %s\n",estado2);
    printf("Cidade: %s\n",cidade2);
    printf("Populacao:%d\n",populacao2);
    printf("Area: %f km²\n",area2);
    printf("PIB:%f bilhoes\n",PIB2);
    printf("Pontos turisticos: %d \n",pontos_turisticos2);
    printf("Densidade populacional :%2f hab/km² \n", Densidade2);
    printf("PIB Percapita :%2f \n", PIBPERCAPTA2);
    printf("Super Poder :%2f\n",superpoder2);

    

    // RESULTADOS - COMPARAÇOES //
    printf ("Comparando as cartas\n");
   if (populacao1 > populacao2)
   { "Populacao:Carta 1 venceu %d!\n");
    vitorias1++;}
    else{printf("Populacao: Carta2 venceu%d!\n"); vitorias++;}

    if(area1 > area2)
     {printf("Area: Carta1 venceu%d !\n)";vitorias1++;}
    else{printf(Area: Carta 2 venceu!\n")";vitorias2++;}

    if(pontos_turisticos1 > pontos_turisticos2)
    {printf("pontos turisticos: carta 1 venceu !\n");vitorias1++;}
    else{printf("pontos turisticos: carta 2 venceu !\n");vitorias2++;}
    
    if(densidade1 > densidade2);
    {printf("Densidade populacional: carta 1 venceu !\n");vitorias1++;}
    else{printf("Densidade populacional: carta 2 venceu !\n");vitorias2++;}

      if(PIBPERCAPTA1 > PIBPERCAPTA2);
    {printf("PIB per Capita: carta1 venceu !\n");vitorias1++;}
    else{printf("PIB per Capita: carta 2 venceu !\n");vitorias2++;}

      if(superpoder1 > superpoder2)
    {printf("Super Poder: carta1 venceu !\n");vitorias1++;}
    else{printf("Super Poder: carta 2 venceu !\n");vitorias2++;}

    
    
    // PLACAR FINAL //

    printf("PLACAR FINAL\n");
    printf("Carta 1 venceu %d atributos\n",vitorias1);
    print("Carta 2 venceu %d atributos\n",vitorias2);

    if (vitorias1 > vitorias2) {
        printf("\n Carta 1 é a campeã!\n");
                }
            
    else if (vitorias2 > vitorias1)
     {printf("Carta 2 é a vencedora!\n");
         }
    else{printf("\n Empate!\n");}

    return 0;

        }