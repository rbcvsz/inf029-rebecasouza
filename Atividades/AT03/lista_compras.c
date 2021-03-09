#include <stdio.h>
#include "despensa.h" 
#include "higiene.h"
#include "hortifruti.h"

int main(){

	int opcao;

	printf("########## LISTA DE COMPRAS ########## \n\n");
	printf("(1) Alimentos em geral\n(2) Higiene pessoal\n(3) Hortifruti\n(4) Todos os itens\n\n");
	printf("Selecione a opção que deseja exibir: \n\n");
	scanf("%d", &opcao);

	if (opcao == 1){
		despensa();
	}
	else if (opcao == 2){
		higiene();
	}
	else if (opcao == 3){
		hortifruti();
	}
	else if (opcao == 4){
		despensa();
		higiene();
		hortifruti();
	}
	else printf("Opcao não disponivel!");
}
