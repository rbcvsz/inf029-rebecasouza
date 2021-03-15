/*
Crie um programa que tenha uma função soma e a função main. A função main deve ler dois
valores, enviar para a função soma. A função soma deve realizar a soma e retornar o valor. A
Função main deve imprimir o resultado da soma.
*/

#include <stdio.h>

int f_soma(int num1, int num2){

	int soma;

	soma = num1 + num2;
	return soma;

}

int main()
{
	int num1, num2, resultado;

	printf("Informe dois valores a serem somados:\n");
	scanf("%d%d", &num1, &num2);

	resultado = f_soma(num1, num2);

	printf("%d + %d = %d\n\n", num1, num2, resultado);

}
