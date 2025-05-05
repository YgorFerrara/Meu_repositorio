#include <stdio.h>

int main() {

char estado, codigo[50], cidade[50], estado2, codigo2[50], cidade2[50]; //codigo=codigo da carta
int pt, pt2; 
float pib, pib2, densidade, densidade2, area, area2, pib_per_capta, pib_per_capta2, Super_poder, Super_poder2;
unsigned long int populacao, populacao2;


printf("Digite a letra do seu estado: \n");
scanf(" %c", &estado);

printf("Digite o código da sua carta: \n");
scanf(" %s", codigo);

printf("Digite o nome da sua cidade: \n");
scanf(" %s", cidade);

printf("Digite a população total da sua cidade \n");
scanf(" %lu", &populacao);

printf("Digite a area total da sua cidade em km²: \n");
scanf(" %f", &area);

printf("Digite o pib total da sua cidade: \n");
scanf(" %f", &pib);

printf("Digite o numero total de pontos turisticos da sua cidade: \n");
scanf(" %d", &pt);


densidade = populacao / area;
pib_per_capta = pib / populacao;
Super_poder = (float)populacao + area + pib + (float)pt + pib_per_capta + (1.0 / densidade);

printf("Digite a letra do seu estado: \n");
scanf(" %c", &estado2);

printf("Digite o código da sua carta: \n");
scanf(" %s", codigo2);

printf("Digite o nome da sua cidade: \n");
scanf(" %s", cidade2);

printf("Digite a população total da sua cidade \n");
scanf(" %lu", &populacao2);

printf("Digite a area total da sua cidade em km²: \n");
scanf(" %f", &area2);

printf("Digite o pib total da sua cidade: \n");
scanf(" %f", &pib2);

printf("Digite o numero total de pontos turisticos da sua cidade: \n");
scanf(" %d", &pt2);


densidade2 = populacao2 / area2;
pib_per_capta2 = pib2 / populacao2;
Super_poder2 = (float)populacao2 + area2 + pib2 + (float)pt2 + pib_per_capta2 + (1.0 / densidade2);

printf("Carta 1:\n");
printf("Estado: %c\n", estado);
printf("Código da carta: %s\n", codigo);
printf("Nome da cidade: %s\n", cidade);
printf("População total: %lu\n", populacao);
printf("Área total em Km²: %.2f\n", area);
printf("PIB total: %.2f\n", pib);
printf("Pontos turísticos totais: %d\n", pt);
printf("Densidade populacional: %.2f Hab/km²\n", densidade);
printf("Pib per capta: %.2f reais\n", pib_per_capta);

printf("Carta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código da carta: %s\n", codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("População total da cidade: %lu\n", populacao2);
printf("Área total da cidade em Km²: %.2f\n", area2);
printf("PIB total: %.2f\n", pib2);
printf("Pontos turísticos totais: %d\n", pt2);
printf("Densidade populacional: %.2f Hab/km²\n", densidade2);
printf("Pib per capta: %.2f reais\n", pib_per_capta2);

printf("\nComparação das cartas:\n");

printf("População: Carta1 venceu: %d\n", populacao > populacao2 ); 
printf("Area: Carta1 venceu: %d\n", area > area2);
printf("Pib: Carta1 venceu: %d\n", pib > pib2);
printf("Pib per capta: Carta1 venceu: %d\n", pib_per_capta > pib_per_capta2);
printf("Pontos turísticos: Carta1 venceu: %d\n", pt > pt2);
printf("Densidade populacional: Carta1 venceu: %d\n", densidade < densidade2);
printf("Super poder: Carta1 venceu: %d\n", Super_poder > Super_poder2 );


return 0;

}
