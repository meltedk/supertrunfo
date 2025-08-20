#include <stdio.h>
#include <string.h>

int main(){

	char codEstado1, codCarta1[3], nomeCidade1[40];
	char codEstado2, codCarta2[3], nomeCidade2[40];

	unsigned long int populacao1, populacao2;

	int pontosTuristicos1;
	int pontosTuristicos2;

	float area1, pib1;
	float area2, pib2;



	printf("\n\t\tSUPER TRUNFO - Cidades Brasileiras\n");
	printf("\nInstruções:"
	"\nO jogo irá solicitar a incersão dos dados de duas cartas e irá os exibir ao final da execução\n");



	printf("\n\n\n\t\tINSIRA OS DADOS DA PRIMEIRA CARTA!\n");
	printf("\n\nCÓDIGOS DOS ESTADOS--->[ A = SP | B = RJ | 'C' = ES |"
	" 'D' = MG | 'E' = RS | 'F' = SC | 'G' = PR | 'H' = DF ]"
	"\nInsira o código do estado: ");
	scanf(" %c", &codEstado1);
	printf("Informe o código da carta (um número do 01 a 04): ");
	scanf("%s%*c", codCarta1); // %*c depois do especificador de formato %s é adicionado para remover o caractere '\n' do final do array.
	printf("Informe o nome da cidade: ");
	fgets(nomeCidade1, 40, stdin);
	nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;
	printf("Informe a população(%s): ", nomeCidade1);
	scanf("%lu",&populacao1);
	printf("Informe a área(%s) em km²: ", nomeCidade1);
	scanf("%f", &area1);
	printf("Informe o PIB(%s): ", nomeCidade1);
	scanf("%f", &pib1);
	printf("Informe o número de pontos turísticos(%s): ", nomeCidade1);
	scanf("%d", &pontosTuristicos1);
	printf("\n\t\t!!!Carta cadastrada com sucesso!!!");



	printf("\n\n\n\t\tINSIRA OS DADOS DA SEGUNDA CARTA!\n");
	printf("\nCÓDIGOS DOS ESTADOS--->[ A = SP | B = RJ | 'C' = ES |"
	" 'D' = MG | 'E' = RS | 'F' = SC | 'G' = PR | 'H' = DF ]"
	"\nInsira o código do estado: ");
	scanf(" %c", &codEstado2);
	printf("Informe o código da carta (um número do 01 a 04): ");
	scanf("%s%*c", codCarta2);
	printf("Informe o nome da cidade: ");
	fgets(nomeCidade2, 40, stdin);
	nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;
	printf("Informe a população(%s): ", nomeCidade2);
	scanf("%lu",&populacao2);
	printf("Informe a área(%s) em km²: ", nomeCidade2);
	scanf("%f", &area2);
	printf("Informe o PIB(%s): ", nomeCidade2);
	scanf("%f", &pib2);
	printf("Informe o número de pontos turísticos(%s): ", nomeCidade2);
	scanf("%d", &pontosTuristicos2);
	printf("\n\t\t!!!Carta cadastrada com sucesso!!!\n\n");




	// Calculos
	float densidadePopulacional1, pibPerCapita1;
	float densidadePopulacional2, pibPerCapita2;
	float superPoder1, superPoder2;

	densidadePopulacional1 = populacao1 / area1;
	densidadePopulacional2 = populacao2 / area2;

	pibPerCapita1 = pib1 / populacao1;
	pibPerCapita2 = pib2 / populacao2;

	superPoder1 = populacao1 +  area1 + pib1 + pontosTuristicos1 +
	pibPerCapita1 + (1 / densidadePopulacional1);

	superPoder2 = populacao2 +  area2 + pib2 + pontosTuristicos2 +
	pibPerCapita2 + (1 / densidadePopulacional2);



	// Exibição de atributos
	printf("\nCarta 1: \n");
	printf("Estado: %c\n", codEstado1);
	printf("Código: %c%s\n", codEstado1, codCarta1);
	printf("Nome da Cidade: %s\n", nomeCidade1);
	printf("População: %lu\n", populacao1);
	printf("Área: %.2f km²\n", area1);
	printf("PIB: %.2f bilhões de reais\n", pib1 / 1000000000);
	printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
	printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
	printf("PIB per Capita: %.2f\n", pibPerCapita1);


	printf("\nCarta 2: \n");
	printf("Estado: %c\n", codEstado2);
	printf("Código: %c%s\n", codEstado2, codCarta2);
	printf("Nome da Cidade: %s\n", nomeCidade2);
	printf("População: %lu\n", populacao2);
	printf("Área: %.2f km²\n", area2);
	printf("PIB: %.2f bilhões de reais\n", pib2 / 1000000000);
	printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
	printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
	printf("PIB per Capita: %.2f\n", pibPerCapita2);




	// Comparação e exibição dos atributos
	printf("\n\n\t[ 1 = Carta 1 | 0 = Carta 2 ]\n");
	printf("Comparação de cartas:\n");
	printf("População: %d\n", populacao1 > populacao2);
	printf("Área: %d\n", area1 > area2);
	printf("PIB: %d\n", pib1 > pib2);
	printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
	printf("Densidade Populacional: %d\n", densidadePopulacional1 < densidadePopulacional2);
	printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
	printf("Super Poder: %d\n", superPoder1 > superPoder2);

	return 0;
}
