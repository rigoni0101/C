// aula0610.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <windows.h> 
#include "locale.h"
#include <conio.h>

int numero1, numero2;
float resultado;

int main()
{
	setlocale(LC_ALL, "");
	system("color 0");
	printf("digite oprimeiro numero.\n");
	scanf_s("%i", &numero1);
	printf("digite o segundo numero\n");
	scanf_s("%i", &numero2);



	printf("========================\n");
	resultado = numero1 + numero2;
	printf("a soma e:%i\n", resultado);
	printf("========================\n");
	resultado = numero1 - numero2;
	printf("a subtraçao e:%i\n", resultado);
	printf("========================\n");
	resultado = numero1 * numero2;
	printf("multiplicacao e:%i\n", resultado);
	printf("========================\n");
	resultado = (float)numero1 / numero2;
	printf("sua divisao e:%f\n", resultado);
	printf("========================\n");
	printf("o resto da divisao e %i\n", numero1 = numero1 % numero2);
	printf("========================\n");



	system("pause");
    return 0;
}

