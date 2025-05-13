#include <stdio.h>

//Iremos definir as variaveis

int main (){
    char estado1[4], estado2[4];
    char code1[4],code2[4];
    char nome1[20],nome2[20];
    unsigned long int populacao1, populacao2;
    int pontotu1, pontotu2;
    float area1, area2;
    float pib1, pib2;
    

    //apos definir as variaveis, agora vamos fazer a interação com usuario para ele definir os valores e dados.

    //ESTADO DAS CARTAS:
    printf ("digite o estado da carta de A a H\n");
    scanf ("%s",&estado1);

    

    //CODIGO DAS CARTAS:

    printf ("digite o codigo da carta 1\n");
    scanf ("%s",&code1);

    
    //NOMES DAS CIDADES:

    printf ("digite o nome da cidade da carta 1:\n");
    scanf ("%s",&nome1);

   
    //NUMERO POPULACIONAL DAS CIDADES:

    printf ("numero de habitantes da cidade da carta 1\n");
    scanf ("%lu",&populacao1);

    
    //AREA EM KM²:

    printf ("digite a area em Km² da carta 1\n");
    scanf ("%f",&area1);

    
    //PRODUTO INTERNO BRUTO DAS CIDADES:

    printf ("digite o Produto Interno Bruto da cidade da carta 1\n");
    scanf ("%f",&pib1);

    

    //PONTOS TURISTICOS DAS CIDADES:

    printf ("quantos pontos turisticos terá a cidade da carta 1?\n");
    scanf ("%i",&pontotu1);

   

    //DENSIDADE POPULACIONAL:

    float Decipop1 = (float) populacao1/area1;
    

    //PIB PER CAPITA:

    float PIBCap1 = (pib1*1000000000)/populacao1;

    //SUPERPODER:

    float Superpower1 = (float)populacao1+area1+pib1+PIBCap1+(float)pontotu1-Decipop1; 
    

    //carta 2

    printf ("digite o estado da segunda carta de A a H\n");
    scanf ("%s",&estado2);

    printf ("digite o codigo da carta 2\n");
    scanf ("%s",&code2);

    printf ("digite o nome da cidade da carta 2:\n");
    scanf ("%s",&nome2);

    printf ("numero de habitantes da cidade da carta 2\n");
    scanf ("%lu",&populacao2);

    printf ("digite a area em Km² da carta 2\n");
    scanf ("%f",&area2);

    printf ("digite o Produto Interno Bruto do cidade da carta 2\n");
    scanf ("%f",&pib2);

    printf ("quantos pontos turisticos terá a cidade da carta 2?\n");
    scanf ("%i",&pontotu2);

    float Decipop2 = (float) populacao2/area2;

    float PIBCap2 = (pib2*1000000000)/populacao2;

    float Superpower2 = (float)populacao2+area2+pib2+PIBCap2+(float)pontotu2-Decipop2; 

    



    //IMPRIMIR OS DADOS DAS CARTAS:

    //carta 1
    printf ("\n\n[___[Carta 1]___]\nEstado:%s\nCódigo do estado:%s\nNome da cidade:%s\n", estado1,code1,nome1);
    printf ("população:%lu\nÁrea:%.2fKm²\n", populacao1,area1);
    printf ("PIB:%.2f bilhões de reais\nPontos turísticos:%i\n", pib1, pontotu1);
    printf ("Densidade populacional:%.2f hab/Km²\n", Decipop1);
    printf ("PIB per Capita:%.2f reais\n", PIBCap1);
    printf ("SUPERPODER:%.2f\n",Superpower1);

    //carta2
    printf ("\n\n[___[Carta 2]___]\nEstado:%s\nCódigo do estado:%s\nNome da cidade:%s\n", estado2,code2,nome2);
    printf ("população:%lu\nÁrea:%.2fKm²\n", populacao2,area2);
    printf ("PIB:%.2f bilhões de reais\nPontos turísticos:%i\n",pib2, pontotu2);
    printf ("Densidade populacional:%.2f hab/Km²\n", Decipop2);
    printf ("PIB per Capita:%.2f reais\n",PIBCap2);
    printf ("SUPERPODER:%.2f\n",Superpower2);

    printf ("RESULTADOS\n\nobsZERO é derrota, e UM é vitoria.\n\n");
    printf ("Carta 1:\nPOPULAÇÃO:%d\nAREA:%d\nPIB:%d\nPONTOS TURISTICOS:%d",populacao1>populacao2,area1>area2,pib1>pib2,pontotu1>pontotu2);
    printf ("\nDENSIDADE POPULACIONAL:%d\nPIB PER CAPITA:%d\nSUPERPODER:%d\n\n",Decipop1<Decipop2,PIBCap1>PIBCap2,Superpower1>Superpower2);

    return 0;

  //trabalho de Thiago Daniel Maciel do Nascimento

}
