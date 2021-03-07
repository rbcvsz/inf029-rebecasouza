#include <stdio.h>

int main()
{	
	int num1, num2, oper;
	int soma, subtracao, multiplicacao, divisao;

	printf("Informe dois numeros inteiros:\n");
	scanf("%d %d", &num1, &num2);

	soma = num1 + num2;
	subtracao = num1 - num2;
	multiplicacao = num1 * num2;
	divisao = num1 / num2;

	
	printf("Informe a operacao a ser realizada: \n");
	printf("0 - Sair\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n");
	scanf("%d", &oper);


	if (oper == 1){
		printf("Soma: %d\n", soma);
	}
	else if (oper == 2){
		printf("Subtracao: %d\n", subtracao);
	}
	else if (oper == 3){
		printf("Multiplicacao: %d\n", multiplicacao);
	}
	else if (oper == 4){
		printf("Divisao: %d\n", divisao);
	}
	else if (oper == 0){
		printf("Programa finalizado!\n");
	}
	else {
		printf("Operacao incorreta!\n");
	}


	return 0;

}
