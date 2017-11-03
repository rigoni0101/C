// exercio4.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <stdlib.h>
#include <windows.h>

float numero1, numero2;
float resultadodesconto, resultadoacrescimo;

int main()
{
	printf("digite o valor que ira receber o acrescimo:\n");
	scanf_s("%f", &numero1);

	printf("digite o valor que tera o desconto:\n");
	scanf_s("%f", &numero2);

	resultadoacrescimo = numero1 + numero1 * 0.30;
	resultadodesconto = numero2 - numero2 * 0.25;
	printf("o resultado do acrescimo e de :\n %f \n o resultado do desconto e de:\n %f\n", resultadoacrescimo, resultadodesconto);
	system("pause");

    return 0;
}

