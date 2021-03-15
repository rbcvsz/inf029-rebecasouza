/*
Crie um programa que tenha uma função subtrai e a função main. A função main deve ler três
valores, enviar para a função subtrai. A função subtrai deve realizar a subtração dos três valores
(primeiro menos o segundo menos o terceiro) e retornar o valor. A Função main deve imprimir o
resultado da subtração.
*/

#include <stdio.h>

int f_subtrai(int num1, int num2, int num3){

	int subtrai;

	subtrai = num1 - num2 - num3;
	return subtrai;

}

int main()
{
	int num1, num2, num3, resultado;

	printf("Informe tres valores a serem subtraidos:\n");
	scanf("%d%d%d", &num1, &num2, &num3);

	resultado = f_subtrai(num1, num2, num3);

	printf("%d - %d - %d = %d\n\n", num1, num2, num3, resultado);

}
