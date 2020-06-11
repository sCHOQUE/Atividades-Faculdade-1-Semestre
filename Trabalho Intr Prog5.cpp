#include <stdio.h>

main () 
{
	float VV,COM;
	char COR[10];
	
	printf("Entre com o nome do corretor: ");
	scanf("%s", &COR);
	printf("Entre com o valor da venda: ");
	scanf("%f", &VV);
	
		if (VV > 50000){
			printf("\nValor total da venda: R$%.2f\n", VV);
			printf("\nNome do corretor: %s", COR);
			COM=VV*12/100;
			printf("\nComissao do corretor: R$%.2f", COM);}

			else if ( VV >= 30000 && VV <= 50000 ){
				printf("\nValor total da venda: R$%.2f\n", VV);
				printf("\nNome do corretor: %s", COR);
				COM=VV*9.5/100;
				printf("\nComissao do corretor: R$%.2f", COM);}
		
		
			else{
				printf("\nValor total da venda: R$%.2f\n", VV);
				printf("\nNome do corretor: %s", COR);
				COM=VV*7/100;
				printf("\nComissao do corretor: R$%.2f", COM);}
}
