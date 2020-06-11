#include <stdio.h>

main () {
	int IDADE,AATUAL,ANASC,AING,TTRAB;
	
	printf("Ano atual: ");
	scanf("%d", &AATUAL);
	printf("\nAno de nascimento: ");
	scanf("%d", &ANASC);
	printf("\nAno de ingresso na empresa: ");
	scanf("%d", &AING);
	
	IDADE=AATUAL-ANASC;/*Uma formula para calcular idade a partir do ano atual e do ano de nascimento.*/
	TTRAB=AATUAL-AING;/*Usei a mesma formula da linha de cima aqui, só que neste caso usei para saber o tempo de trabalho*/
	
	if (IDADE >= 65 || AATUAL-AING >= 30 || (IDADE >= 60) && (AATUAL-AING >= 25)) {/*Determinei as condições, e o programa vai executar se uma delas se realizar, pois utilizei o ||(ou)*/
		printf("\nIdade do funcionario: %d", IDADE);
		printf("\nTempo de trabalho: %d", TTRAB);
		printf("\nApto para aposentadoria.");}

	/*Se nenhuma das condições acima forem satisfeitas, o programa irá retorna*/		
	else {/*Apenas else e não else if pois não ha nenhuma outra condição a ser aplicada para else, então qualquer outra coisa diferente das condições if o else será executado*/
		printf("\nIdade do funcionario: %d", IDADE);
		printf("\nTempo de trabalho: %d", TTRAB);
		printf("\nNao Apto para aposentadoria.");}
}
