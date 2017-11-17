// exercicio10.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <Windows.h>

int numero[5], x, z, y;

int main()
{
	x = 0;
		z = 0;
		y = 0;

	printf("Digite o primeiro numero:\n");
	scanf_s("%i", &numero[0]);

	printf("Digite o primeiro numero:\n");
	scanf_s("%i", &numero[1]);

	printf("Digite o primeiro numero:\n");
	scanf_s("%i", &numero[2]);

	printf("Digite o primeiro numero:\n");
	scanf_s("%i", &numero[3]);

	printf("Digite o primeiro numero:\n");
	scanf_s("%i", &numero[4]);

	while (z < 5)
	{
		
				if (numero[z] > 10)
				{
					printf("%i \n", numero[z]);
				}
				z = z + 1;
	}

	system("PAUSE");
    return 0;
}

