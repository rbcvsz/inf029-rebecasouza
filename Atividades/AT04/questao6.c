/*
Crie um programa que tenha uma função ler3Letras. Essa função deve ler três letras do usuário
e retornar as três letras. A função main deve imprimir essas três letras.
*/

#include <stdio.h>
#define TAM 3

void flush_in()
{
   int ch;

   while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

void ler3Letras(char *v, int tamanho){

	int i;

	for (i = 0; i < tamanho; i++){
		printf("Informe a letra na posicao %d: ", i);
		scanf("%c", &v[i]);
		flush_in();
	}

}

int main(){

	int tam = TAM, j;
	char vetor[TAM];

	ler3Letras(vetor, tam);

	for (j = 0; j< tam; j++){
		printf("Posicao %d = %c\n", j, vetor[j]);

	}
	
	
	return 0;
}
