#include <stdio.h>
main () 
{
	float SALFXO,COM,COM5,TOTVEN,TOT,VALEX,VALMAX;
	
	VALMAX=1500;
	
	printf("\nEntre com o valor do salario fixo: ");
	scanf("%f", &SALFXO);
	printf("\nEntre com o valor total de vendas: ");
	scanf("%f", &TOTVEN);
	
	if (TOTVEN <= 1500){/*Para limitar a ação em valores iguais ou abaixo de 1500*/
		COM=TOTVEN*3/100;/*Calculo para os 3%*/
		TOT=COM+SALFXO;/*Determinei a impressão da soma do salário fixo, comissão de 3% e comissão de 5%*/
		printf("\nSalario total: R$%8.2f", TOT);}
		
		else if (TOTVEN > 1500){
		VALEX=TOTVEN-VALMAX;/*Determinei um ponto maximo, desta forma, o valor que ultrapassar este ponto máximo será considerado um valor excedente*/
			printf("\nValor excedente: R$%.2f",VALEX);/*Para deixar explicito o valor sob qual será bonificado 5% de comissão*/
		COM5=VALEX*5/100;/*5% Aplicado somente ao valor que se excedeu ao teto preestabelecido.*/
			printf("\nComissao de 5%% sobre o valor Excedente: R$%.2f",COM5);
		COM=VALMAX*3/100;/*Determinei um valor máximo(VALMAX) na 6ª linha para conseguir limitar o range da comissão de 3%*/
			printf("\nComissao sobre R$1500 do total de vendas: R$%.2f\n",COM);
		TOT=SALFXO+COM+COM5;/*Determinei a impressão da soma do salário fixo, comissão de 3% e comissão de 5%*/
		printf("\nSalario total: R$%8.2f", TOT);
		} 
}
