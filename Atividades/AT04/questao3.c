/*
Faça um programa que tenha uma função que recebe um número inteiro e retorna o fatorial
deste número. Esta função deve ainda verificar se é possível calcular o fatorial, se não for, ela deve
de alguma forma retornar para a main que deu algum erro. A função main deve solicitar o valor do
usuário e imprimir o fatorial dele, ou se não é possível calcular o fatorial.
*/


#include <stdio.h>

int f_fat(int num){
	
	int fatorial;

	if (num == 0) {
		return 1;
	}
	
	else {
		fatorial = num*f_fat(num-1);
	}
	return fatorial;

}


int main(){

	int num, resultado;
	
	printf("Informe um numero: ");
	scanf("%d", &num);

	if (num >= 0){
		resultado = f_fat(num);
		printf("Fatorial de %d = %d\n\n", num, resultado);
	}
	else {
		printf("Numero invalido\n\n");
	}
}
