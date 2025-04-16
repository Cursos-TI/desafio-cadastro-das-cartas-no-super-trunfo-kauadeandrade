#include <stdio.h>
 


int main()
{
	
	char estado [1], CodigodaCarta [3] , NomedaCidade [12], estado2 [1], CodigodaCarta2 [3] , NomedaCidade2 [12];
    int Populacao , PontosTurísticos,Populacao2 , PontosTurísticos2;
    float areakm , PIB,areakm2 , PIB2,densidade, densidade2,PIBporcapita,PIBporcapita2;
    unsigned int superpoder1,superpoder2;
    int resultadopopulacao,resultadopontosturisticos,resultadoarea,resultadoPIB,resultadoDensidade,resultadoPIBporcapita,resultadosuperpoder;
    

      

    printf("digite o estado:\n");
    scanf("%s",estado);

    printf("digite o codigo da carta:\n");
    scanf("%s", CodigodaCarta);

    printf("digite o nome da cidade:\n");
    scanf("%s", NomedaCidade);

    printf("digite a populacao:\n");
    scanf("%i", &Populacao);

    printf("digite a area em km:\n");
    scanf("%f", &areakm);

    printf("digite o PIB:\n");
    scanf("%f", &PIB);
   
   printf("digite o numero de Pontos Turisticos:\n");
    scanf("%i", &PontosTurísticos);
   

    printf("digite o estado da carta 2:\n");
    scanf("%s",estado2);

    printf("digite o codigo de carta 2:\n");
    scanf("%s", CodigodaCarta2);

    printf("digite o nome da cidade da carta 2:\n");
    scanf("%s", NomedaCidade2);

    printf("digite a populacao da carta 2:\n");
    scanf("%i", &Populacao2);

    printf("digite a area em km da carta 2:\n");
    scanf("%f", &areakm2);

    printf("digite o PIB da carta 2:\n");
    scanf("%f", &PIB2);
   
   printf("digite o numero de Pontos Turisticos da carta 2:\n");
    scanf("%i", &PontosTurísticos2);
   

    densidade = Populacao  / areakm; 
    densidade2 = Populacao2  / areakm2; 
    PIBporcapita = PIB / Populacao;
    PIBporcapita2 = PIB2 / Populacao2;

  


    printf("Carta 1:\n");
    
    printf("Estado:");
    printf("%s\n",estado);

    printf("Codigo da carta:");
    printf("%s",estado);
    printf("%s\n",CodigodaCarta);

    printf("Nome Da Cidade:");
    printf("%s\n",NomedaCidade);

    printf("Populacao:");
    printf("%i\n",Populacao);

    printf("Area (Km):");
    printf("%f km²\n",areakm);

    printf("PIB:");
    printf("%.2f blihoes de reais\n",PIB);

    printf("Pontos Turisticos:");
    printf("%i\n",PontosTurísticos);

    printf("densidade:");
    printf("%f hab/km\n", densidade);

    printf("PIB por Capita:");
    printf("%.2f reais\n",PIBporcapita);
    
   


   


   

    printf("Carta 2:\n");
    
    printf("Estado:");
    printf("%s\n",estado2);

    printf("Codigo da carta:");
    printf("%s",estado2);
    printf("%s\n",CodigodaCarta2);

    printf("Nome Da Cidade:");
    printf("%s\n",NomedaCidade2);

    printf("Populacao:");
    printf("%i\n",Populacao2);

    printf("Area (Km):");
    printf("%f Km²\n",areakm2);

    printf("PIB:");
    printf("%.2f bilhoes de reais\n",PIB2);

    printf("Pontos Turisticos:");
    printf("%i\n",PontosTurísticos2); 

    printf("densidade:");
    printf("%f hab/km\n", densidade2);

    printf("PIB por Capita:");
    printf("%.2f reais\n",PIBporcapita2);

    superpoder1 = (int) Populacao + areakm + PIB + PontosTurísticos + PIBporcapita + densidade;
    superpoder2 = (int) Populacao2 + areakm2 + PIB2 + PontosTurísticos2 + PIBporcapita2 + densidade2;

    resultadopopulacao = Populacao > Populacao2;
    resultadopontosturisticos = PontosTurísticos > PontosTurísticos2;
    resultadoarea = areakm > areakm2;
    resultadoPIB = PIB > PIB2;
    resultadoPIBporcapita = PIBporcapita > PIBporcapita2;
    resultadosuperpoder = superpoder1 > superpoder2;
    resultadoDensidade = densidade < densidade2;
    

    printf("comparacao de cartas:\n");
    printf("populacao:carta 1 Venceu (%d)\n",resultadopopulacao);
    printf("Area:carta 1 Venceu (%d)\n",resultadoarea);
    printf("PIB:carta 1 Venceu (%d)\n",resultadoPIB);
    printf("Pontos turisticos:carta 1 Venceu (%d)\n",resultadopontosturisticos);
    printf("Densidade Populacional:carta 2 Venceu (%d)\n",resultadoDensidade);
    printf("PIB:carta 1 Venceu (%d)\n",resultadoPIB);
    printf("Super Poder:carta 1 Venceu (%d)\n",resultadosuperpoder);

    






 return 0;


}