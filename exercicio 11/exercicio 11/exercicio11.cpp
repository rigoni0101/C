// exe11.cpp: Define o ponto de entrada para a aplicação de console.
//



#include "stdafx.h"
 #include <windows.h>

int oi[7], y, multiplicacao, soma;

int main()
 {
	printf("escreva o primeiro numero\n", oi[0]);
	scanf_s("%i", &oi[0]);
	
		printf("escreva o segundo numero\n", oi[1]);
	scanf_s("%i", &oi[1]);
	
		printf("escreva o terceiro numero\n", oi[2]);
	scanf_s("%i", &oi[2]);
	
		printf("escreva o quarto numero\n", oi[3]);
	scanf_s("%i", &oi[3]);
	
		printf("escreva o quinto numero\n", oi[4]);
	scanf_s("%i", &oi[4]);
	
		printf("escreva o sexto numero\n", oi[5]);
	scanf_s("%i", &oi[5]);
	
		printf("escreva o setimo numero\n", oi[6]);
	scanf_s("%i", &oi[6]);
	
		multiplicacao = 1;
	soma = 0;
	while (y < 7)
		 {
		if (oi[y] < 3)
			 {
			printf("Multi: %i\n", oi[y]);
			multiplicacao = multiplicacao * oi[y];
			
				}
		
			else
			 {
			
				if (oi[y] > 5)
				 {
				printf("Soma: %i\n", oi[y]);
				soma = soma + oi[y];
				
					}
			
				}
		
			y = y + 1;
		}
	
		printf("a soma eh:%i\n", soma);
	printf("a multiplicacao eh:%i\n", multiplicacao);
	
		system("PAUSE");
	return 0;
	}