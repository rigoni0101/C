// exercicio6.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <stdlib.h>
#include <windows.h>

int numero1, numero2, resultado;


int main()
{
	printf("digite o primeiro valor:\n");
	scanf_s("%i", &numero1);

	printf("digite o segundo valor:\n");
	scanf_s("%i", &numero2);

	resultado = numero1 * numero2;

	printf("O resultado da multiplicacao e:\n %i \n", resultado);

	system("pause");
    return 0;
}

