// aula0610.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <windows.h> 
#include "locale.h"
#include <conio.h>

int numero1, numero2, resultado2;
float resultado, resultado3;

int main()
{
	setlocale(LC_ALL, "");
	system("color A");
	printf("digite oprimeiro numero.\n");
	scanf_s("%i", &numero1);
	system("color B");
	printf("digite o segundo numero\n");
	scanf_s("%i", &numero2);


	system("color F");
	printf("\n\n\n\n\n\n\n========================\n");
	resultado2 = numero1 + numero2;
	system("color C");
	printf("a soma e:%i\n", resultado2);
	system("color F");
	printf("========================\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");
	printf("\n\n\n\n\n\n\n========================\n");
	system("color 3");
	printf("a subtraçao e:%i\n", resultado = numero1 - numero2);
	system("color F");
	printf("========================\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");
	printf("\n\n\n\n\n\n\n========================\n");
	resultado2 = numero1 * numero2;
	system("color C");
	printf("multiplicacao e:%i\n", resultado2);
	system("color F");
	printf("========================\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");
	printf("\n\n\n\n\n\n\n========================\n");
	system("color 3");
	printf("sua divisao e:%f\n", resultado3 =(float) numero1 / numero2);
	system("color F");
	printf("========================\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");
	printf("\n\n\n\n\n\n\n========================\n");
	system("color C");
	printf("o resto da divisao e %i\n", numero1 = numero1 % numero2);
	system("color F");
	printf("========================\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");
    return 0;
}

