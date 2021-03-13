#include <stdio.h>

int f_soma(int num1, int num2){

	int soma;
	
	soma = num1 + num2;
	printf("Soma: %d\n", soma);
}

int f_sub(int num1, int num2){

	int subtracao;
	
	subtracao = num1 - num2;
	printf("Subtracao: %d\n", subtracao);
}

int f_mult(int num1, int num2){

	int multiplicacao;
	
	multiplicacao = num1 * num2;
	printf("Multiplicacao: %d\n", multiplicacao);
}

int f_div(int num1, int num2){

	int divisao;
	
	divisao = num1 / num2;
	printf("Divisao: %d\n", divisao);
}

int main()
{	
	int num1, num2, oper;
	int result;

	printf("Informe dois numeros inteiros:\n");
	scanf("%d %d", &num1, &num2);

	printf("Informe a operacao a ser realizada: \n");
	printf("\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\n");
	scanf("%d", &oper);

		switch(oper)
	{

		case 1:
			result = f_soma(num1, num2);
		break;

		case 2:
			result = f_sub(num1, num2);
		break;

		case 3:
			result = f_mult(num1, num2);
		break;

		case 4:
			result = f_div(num1, num2);
		break;
		
		case 0:
			printf("Programa finalizado!\n");
		break;

		default:
			printf("Operacao incorreta!\n");
		break;

	}

	return 0;

}
