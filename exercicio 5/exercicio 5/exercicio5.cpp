// exercicio5.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <stdlib.h>
#include <windows.h>

float salario1, salario2;


int main()
{
	printf("Digite o valor do seu salario:\n");
	scanf_s("%f", &salario1);

	salario2 = salario1 + salario1 * 0.15;
	printf("o valor do seu salario com o acrescimo de 15\% : \n %f \n", salario2);
	system("pause");
    return 0;
}

