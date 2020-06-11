#include <stdio.h>

calDia(int idade){
	return (idade*12)*30;
}

main () {
	int ID;
	
	printf("Digite sua idade: ");
	scanf("%d", &ID);
	
	while(ID != 0){
	printf("Voce viveu %d dias ate agora, parabens!\n",calDia(ID));
	printf("\nDigite sua idade(0 - Para sair): ");
	scanf("%d", &ID);
	}
}
