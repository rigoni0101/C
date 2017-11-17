// exe8.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
 #include <windows.h>


float salario, renda;


int main()
{
	printf("Digite seu salario\n");
	scanf_s("%f", &salario);
	if (salario <= 1903.98)
	{
		printf("Isento do pagamento\n");
	}

	else
	{
		if (salario > 1903.98 && salario <= 2826.65)
		{
			printf("\nSeu paygamento e di 142,80\n");

		}
		else
		{

			if (salario > 2826.65 && salario < 3751.06)
			{

				printf("Seu paygamente e di 354,80\n");
			}

			else
			{
				if (salario > 3751.05 && salario < 4664.68)
				{
					printf("Seu paygamente e di 636,13\n");
				}
				else
				{
					if (salario > 4664.68)
					{

						printf("Seu paygamente e di 869,36 \n");
					}
				}
			}
		}
	}

	system("pause");
	return 0;
}