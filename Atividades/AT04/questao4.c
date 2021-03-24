/*
Crie um programa que tenha uma função ler3Numeros. Essa função deve ler três números do
usuário e retornar os três números. A função main deve imprimir esses três números. Utilize vetor
para fazer o retorno.
*/

#include <stdio.h>
#define TAM 3

void ler3Numeros(int *v, int tamanho){

	int i;

	for (i = 0; i < tamanho; i++){
		printf("Informe valor posicao %d: ", i);
		scanf("%d", &v[i]);
	}

}

int main(){

	int vetor[TAM], tam = TAM, j;

	ler3Numeros(vetor, tam);

	for (j = 0; j< tam; j++){
		printf("Posicao %d = %d\n", j, vetor[j]);

	}
	
	
	return 0;
}
