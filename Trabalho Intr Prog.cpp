#include <stdio.h>
int main ()
{
	int numVendaCarro;
	float salarioFixoFuncionario,comissaoFixaCarro,extra5PorCento,valorTotalVenda,salarioTotalFuncionario;
	
	printf("\nNumero de veiculos vendidos: "); 
	scanf("%d", &numVendaCarro);
	 
	printf("\nComissao: ");
	scanf("%f", &comissaoFixaCarro);
	
	printf("\nSalario fixo do funcionario: ");
	scanf("%f", &salarioFixoFuncionario);
	
	printf("\nValor total de vendas: ");
	scanf("%f", &valorTotalVenda);
	
	comissaoFixaCarro = comissaoFixaCarro * numVendaCarro;
	extra5PorCento = valorTotalVenda / 100 * 5;
	salarioTotalFuncionario = extra5PorCento + comissaoFixaCarro + salarioFixoFuncionario;
	
printf("\nSalario total do funcionario: %2.f",salarioTotalFuncionario);
}
