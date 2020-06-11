/*A Brasileiras.com está concedendo um desconto de 5% para as compras pagas com boleto. 
Faça um programa para ler o valor da compra e pergunte se será paga com boleta. Caso positivo, 
conceda o desconto e informe e valor a pagar. */
#include <stdio.h>

main () {
	char bo;
	float valcomp,desconto=5;
	printf("*************BRASILEIRAS*************\n*******CENTRAL DO FUNCIONARIO********\n**********GESTAO DE VENDAS***********\n");
	printf("\nEntre com o valor parcial da compra: R$");
	scanf("%f", &valcomp);
	
	printf("\nDeseja Pagar com boleto? [S] ou [N]: ");
	scanf(" %c", &bo);
	
	switch(bo){
		case'S':{
		printf("\nPreco total com desconto: R$%.2f", valcomp - valcomp / 100 * desconto);
		break;
		}
		case'N':{
		printf("\nPreco total: R$%.2f", valcomp);
		break;
		}
		default:{
			printf("\nOpcao indisponivel, insira \"S\" para sim e \"N\" para nao");
			break;
		}
	}
}
