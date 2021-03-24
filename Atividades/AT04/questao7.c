/*
Crie um programa que tenha uma função ler3Palavras. Essa função deve ler três palavras do
usuário e retornar as três palavras. A função main deve imprimir essas três palavras.
*/


#include <stdio.h>
#define MAX 3
#define LEN 30


void ler3Palavras(char v[][30], int total){

	int i;
	//char nomes[total][tamanho];

	for (i = 0; i< total; i++){
			printf("Informe um nome: ");
			scanf("%s", v[total]);
		}

}

int main(){

	int j, max = MAX, len = LEN;
	char vetor[max][len];

	ler3Palavras(vetor, max);

	for (j = 0; j< max; j++){
		printf("Posicao %d = %s\n", j, vetor[j]);

	}
	
	
	return 0;
}

