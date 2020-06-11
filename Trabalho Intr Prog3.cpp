#include <stdio.h>

main ()
{
	float desc,preco,parcial,total, porcest;
	int brig,dia,est;
		
	printf("********PAINEL DE VENDAS DO FUNCIONARIO********\n");
	printf("\nSistema de gestao de vendas loja BrigadeirosUniCarioca, para comecar,\ndigite o dia da semana no qual a remessa sera entregue: ");
	printf("\n\n 1- Domingo\n 2- Segunda\n 3- Terca\n 4- Quarta\n 5- Quinta\n 6- Sexta\n 7- Sabado");
	
	printf("\n\nDigite aqui: ");
	scanf("%c", &dia);
	
	printf("\nEntre com o numero de brigadeiros disponiveis em estoque: ");
	scanf("%d", &est);
	
	printf("\nEntre com o numero de brigadeiros comprados:");
	scanf("%d", &brig);
	
	printf("\nEntre com o preco de cada brigadeiro: R$");
	scanf("%f", &preco);

	if
		(dia == '6')
		{printf("\nFrete gratuito.");}	
		if
			(brig > 10)
			{parcial = brig * preco;
			desc = parcial / 100 * 5;
			total = parcial;}
		else if
			(brig <= 10)
			{parcial = brig * preco;
			total = parcial;}
	
	if
		(dia == '1'||'2'||'3'||'4'||'5'||'7');
	if
		(brig > 10)
			{parcial = brig * preco;
			desc = parcial / 100 * 5;
			total = parcial - desc;} 			
		else if
			(brig <= 10)
			{parcial = brig * preco;
			total = parcial;}
	
	printf("\n\nValor total: R$%.2f", total);
	
	if
		(total > 80)
	{printf("\n\n***********************VOUCHER de 10%%***********************\n\nCompra com desconto de 10%% do valor total na proxima compra\n************************************************************");
	parcial = brig * preco;
	desc = parcial / 100 * 5;
	total = parcial - desc;
	porcest = brig * 100 / est;
	
	printf("\n\nEste cliente comprou %.f%% de brigadeiros do estoque.", porcest);
	printf("\n\nNumero atual de brigadeiros disponiveis em estoque: %d", est - brig);}
}
