#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main () {
	
	int DA,V,AC,Q0=0,Q1=0,Q2=0,Q3=0;
	char C[1], HN[20];
	
	printf("*************HOTEIS FAZENDA************\n");
	printf("****************REGISTRO***************\n");
	
	do{
		printf("\nNome do Hotel                         : ");
		scanf("%s",&HN);
		printf("\nDistancia do centro da cidade, em km  : ");
		scanf("%d",&DA);
		printf("\nNumero de visitantes no ultimo feriado: ");
		scanf("%d",&V);
		printf("\nTipo de acesso:\n0 - Nao asfaltado\n1 - Asfaltado\nDigite: ");
		scanf("%d",&AC);
		
	if(DA > 15)
	Q0++;
	
	if(AC == 0){
	Q1+=V;
	Q2++;}
	
	
	if(AC == 1 && V < 1000)
	printf("\nO hotel %s, que fica a %dkm do centro da cidade, recebeu menos de 1.000 visitantes durante o ultimo feriado.\n",HN,DA);
	
	printf("\nDeseja realizar um novo cadastro no registro? (S)im ou (N)ao? ");
	scanf("%s",C);
	
	}while(strcmpi(C,"S")==0);
		
	printf("\nQuantidade de hoteis que ficam a mais de 15km de distancia do centro: %d",Q0);
	
	Q3= Q1 / Q2;
	
	printf("\nQuantidade media de visitantes nos hoteis com acesso nao asfaltado que receberam menos de 1.000 visitantes: %d",Q3);
}
