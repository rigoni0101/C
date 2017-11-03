// exercicio7.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <stdlib.h>
#include <windows.h>


float numero1, numero2, numero3, resultado1, resultado2, resultadogeral;


int main()
{
	printf("Digite o primeiro numero:\n");
	scanf_s("%f", &numero1);

	printf("Digite o segundo numero: \n");
	scanf_s("%f", &numero2);

	printf("Digite o terceiro numero:\n");
	scanf_s("%f", &numero3);

	resultado1 = numero1 + numero2;
	resultado2 = numero2 + numero3;
	resultadogeral = resultado1 * resultado2;

	printf("o resultado e:\n %f \n", resultadogeral);

	system("pause");
    return 0;
}

