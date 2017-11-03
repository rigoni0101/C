// 0311.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <stdlib.h>
#include <windows.h>

float real, dolar;

int main()
{
	printf("Digite o valor em real:\n");
	scanf_s("%f", &real);

	dolar = real * 3.90;
	printf("O valor em dolar e: %f\n", dolar);
	system("PAUSE");
    return 0;
}

