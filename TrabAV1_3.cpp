#include <stdio.h>

main () {
	
	int NUM1,NUM2,NUM3,ORDEM;
	
	printf("\nEntre com 3 numeros a seguir.\n");
	printf("\nNumero 1: ");
	scanf("%d", &NUM1);
	
	printf("\nNumero 2: ");
	scanf("%d", &NUM2);
	
	printf("\nNumero 3: ");
	scanf("%d", &NUM3);	
	
	printf("\nComo deseja imprimir os numeros?");
	printf("\n1 - Ordem crescente\n2 - Ordem descrescente\n3 - Ordem de entrada dos numeros\n\nDigite aqui o numero correspondente a ordem desejada: ");
	scanf("%d", &ORDEM);
	
	switch (ORDEM) {
		case 1:{/*Meu raciocinio*/
			if (NUM1 >= NUM2 && NUM2 >= NUM3)/*Determinei a condição se num1>=num2>=num3*/
				printf("\nResultado: %d, %d, %d", NUM3, NUM2, NUM1);/*Imprima os numero do menor(num3) para o maior(num1)*/
			else if
				(NUM2 >= NUM1 && NUM1 >= NUM3)/*Determinei a condição se num2>=num1>=num3*/
				printf("\nResultado: %d, %d, %d", NUM3, NUM1, NUM2);/*Imprima os numero do menor(num3) para o maior(num2)*/
			else if
				(NUM3 >= NUM2 && NUM2 >= NUM1)/*Determinei a condição se num3>=num2>=num1*/
				printf("\nResultado: %d, %d, %d", NUM1, NUM2, NUM3);/*Imprima os numero do menor(num1) para o maior(num3)*/
			else if
				(NUM2 >= NUM3 && NUM3 >= NUM1)/*Determinei a condição se num2>=num3>=num1*/
				printf("\nResultado: %d, %d, %d", NUM1, NUM3, NUM2);/*Imprima os numero do menor(num1) para o maior(num2)*/
			else if
				(NUM1 >= NUM3 && NUM3 >= NUM2)/*Determinei a condição se num1>=num3>=num2*/
				printf("\nResultado: %d, %d, %d", NUM2, NUM3, NUM1);/*Imprima os numero do menor(num2) para o maior(num1)*/
			else if
				(NUM3 >= NUM1 && NUM1 >= NUM2)/*Determinei a condição se num3>=num1>=num2*/
				printf("\nResultado: %d, %d, %d", NUM2, NUM1, NUM3);/*Imprima os numero do menor(num2) para o maior(num3)*/
			break;
		}
		case 2:{/*Aqui eu repeti o mesmo raciocinio mas inverti os sinais de >= para <=, assim, na hora de imprimir o usuario irá observar os valores em formato decrescente*/
			if (NUM1 <= NUM2 && NUM2 <= NUM3)
				printf("\nResultado: %d, %d, %d", NUM3, NUM2, NUM1);/*Mantive o posicionamento das variaveis de todos os printf*/
			else if
				(NUM2 <= NUM1 && NUM1 <= NUM3)
				printf("\nResultado: %d, %d, %d", NUM3, NUM1, NUM2);
			else if
				(NUM3 <= NUM2 && NUM2 <= NUM1)
				printf("\nResultado: %d, %d, %d", NUM1, NUM2, NUM3);
			else if
				(NUM2 <= NUM3 && NUM3 <= NUM1)
				printf("\nResultado: %d, %d, %d", NUM1, NUM3, NUM2);
			else if
				(NUM1 <= NUM3 && NUM3 <= NUM2)
				printf("\nResultado: %d, %d, %d", NUM2, NUM3, NUM1);
			else if
				(NUM3 <= NUM1 && NUM1 <= NUM2)
				printf("\nResultado: %d, %d, %d", NUM2, NUM1, NUM3);
			break;
		}
		case 3:{
			printf("\nResultado: %d, %d, %d", NUM1, NUM2, NUM3);/*Determinei que imprimisse na mesma ordem em que se introduz os valores,*/
			break;
		}
	}
}
