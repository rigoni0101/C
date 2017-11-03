// sexta13.cpp: Define o ponto de entrada para a aplicação de console.
//este projeto e para testar o while

#include "stdafx.h"
#include <stdlib.h>
#include <windows.h>
char resposta;
float numeroreal;
int numerointeiro, a;


int main()
{
	while (a < 1)
	{

		printf("Voce deseja:\n while true = t\n while 0-100 = w\n");
		scanf_s("%c", resposta);
		if (resposta == 't')
		{
			while (true)
			{
				numeroreal = numeroreal + 1;
				printf("%f", numeroreal);
				Sleep (1234);
			}
		}
		if (resposta == 'w')
		{
			while (numerointeiro < 101)
			{
				numerointeiro = numerointeiro + 1;
				printf("%i", numerointeiro);
			}
		}
		else
		{
			printf("digite uma opcao valida pff.");
			system("pause");
			a
		}

		system("pause");
	}
    return 0;
}

