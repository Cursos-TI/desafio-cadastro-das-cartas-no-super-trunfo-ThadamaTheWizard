#include <stdio.h>

//Iremos definir as variaveis

int main (){
    char estado1[4], estado2[4];
    char code1[4],code2[4];
    char nome1[20],nome2[20];
    int populacao1, populacao2;
    int pontotu1, pontotu2;
    float area1, area2;
    float pib1, pib2;

    //apos definir as variaveis, agora vamos fazer a interação com usuario para ele definir os valores e dados.

    //ESTADO DAS CARTAS:
    printf ("digite o estado da carta de A a H\n");
    scanf ("%s",&estado1);

    printf ("digite o estado da segunda carta de A a H\n");
    scanf ("%s",&estado2);

    //CODIGO DAS CARTAS:

    printf ("digite o codigo da carta 1\n");
    scanf ("%s",&code1);

    printf ("digite o codigo da carta 2\n");
    scanf ("%s",&code2);

    //NOMES DAS CIDADES:

    printf ("digite o nome da cidade da carta 1:\n");
    scanf ("%s",&nome1);

    printf ("digite o nome da cidade da carta 2:\n");
    scanf ("%s",&nome2);

    //NUMERO POPULACIONAL DAS CIDADES:

    printf ("numero de habitantes da cidade da carta 1\n");
    scanf ("%i",&populacao1);

    printf ("numero de habitantes da cidade da carta 2\n");
    scanf ("%i",&populacao2);

    //AREA EM KM²:

    printf ("digite a area em Km² da carta 1\n");
    scanf ("%f",&area1);

    printf ("digite a area em Km² da carta 2\n");
    scanf ("%f",&area2);

    //PRODUTO INTERNO BRUTO DAS CIDADES:

    printf ("digite o Produto Interno Bruto da cidade da carta 1\n");
    scanf ("%f",&pib1);

    printf ("digite o Produto Interno Bruto do cidade da carta 2\n");
    scanf ("%f",&pib2);

    //PONTOS TURISTICOS DAS CIDADES:

    printf ("quantos pontos turisticos terá a cidade da carta 1?\n");
    scanf ("%i",&pontotu1);

    printf ("quantos pontos turisticos terá a cidade da carta 2?\n");
    scanf ("%i",&pontotu2);

    //IMPRIMIR OS DADOS DAS CARTAS:

    printf ("\n\n[___[Carta 1]___]\nEstado:%s\nCódigo do estado:%s\nNome da cidade:%s\n", estado1,code1,nome1);
    printf ("população:%i\nÁrea:%.2fKm²\n", populacao1,area1);
    printf ("PIB:%.2f bilhões de reais\nPontos turísticos:%i", pib1, pontotu1);
    printf ("\n\n[___[Carta 2]___]\nEstado:%s\nCódigo do estado:%s\nNome da cidade:%s\n", estado2,code2,nome2);
    printf ("população:%i\nÁrea:%.2fKm²\n", populacao2,area2);
    printf ("PIB:%.2f bilhões de reais\nPontos turísticos:%i\n",pib2, pontotu2);
    return 0;

  //trabalho de Thiago Daniel Maciel do Nascimento.

}
