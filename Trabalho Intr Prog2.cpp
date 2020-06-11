#include <stdio.h>

main ()
{
	float litros,parcial,desconto,total;
	char tc;
	
	printf("\nEntre com o tipo de combustivel: \nG- Gasolina\nA- Alcool\n\nDigite a seguir:");
	scanf("%c", &tc);
	
	printf("\nDigite a quantidade de litros desejada: ");
	scanf("%f", &litros);
	
	if(tc == 'G' && litros <=20)
		{parcial = litros * 4.30;
		desconto = parcial / 100 * 4;
		total = parcial - desconto;
		printf("\nValor total gasto com Gasolina: R$%.2f\n", total);}
			else if(tc == 'G' && litros >20)
				{parcial = litros * 4.30;
				desconto = parcial / 100 * 6;
				total = parcial - desconto;
				printf("\nValor total gasto com Gasolina: R$%.2f\n", total);}
		
				
				if(tc == 'A' && litros <= 20)
					{parcial = litros * 3.90;
					desconto = parcial / 100 * 3;
					total = parcial - desconto;
					printf("\nValor total gasto com Alcool: R$%.2f\n", total);}
						else if(tc== 'A' && litros >20)
							{parcial = litros * 3.90;
							desconto = parcial / 100 * 5;
							total = parcial - desconto;
							printf("\nValor total gasto com Alcool: R$%.2f\n", total);}
}
