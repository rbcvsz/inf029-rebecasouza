/*
Crie um programa que tenha uma função ler3Numeros. Essa função deve ler três números do
usuário e retornar os três números. A função main deve imprimir esses três números. Utilize vetor
para fazer o retorno.
*/

#include <stdio.h>

int ler3Numeros(){

	int i, total[3];

	for (i =1; i<=3; i++){

		printf("Informe um numero:\n");
		scanf("%d", &total[i]);
	}

	return total[3];
}

int main(){

	int resultado;

	resultado = ler3Numeros();

	printf("Result: %d\n\n", resultado);
}
