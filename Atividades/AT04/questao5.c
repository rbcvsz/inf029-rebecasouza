/*
Crie um programa que tenha uma função ler4Numeros. Essa função deve ler quatro números do
usuário e retornar os quatro números. A função main deve imprimir esses quatro números. Utilize
struct para fazer o retorno.
*/

#include <stdio.h>

struct Numero
{
	int vetor_num[4];
};

void ler4Numeros(struct Numero num){

	int i;
	
	for (i = 0; i <4; i++){
		printf("Informe um numero para a posicao %d: ", i);
		scanf("%d", &num.vetor_num[i]);
	}


}

int main(){

	struct Numero quantidade;

	ler4Numeros(quantidade);

}
