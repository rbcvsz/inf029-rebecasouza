// Projeto escola V1 -- testes programa enxuto

#include <stdio.h>

#include "aluno.h"

void imprimeLinha(void);

int main()
{

	int opcao;																 // recebe qual opção o usuario deseja cadastrar
	
	imprimeLinha();
	printf("\n--------------- SISTEMA DE CADASTRO # ESCOLA ---------------\n");
	imprimeLinha();
	printf("\n1 - Area de Alunos \n2 - Area de Professores\n3 - Area de Disciplinas\n\n");
	printf("-> Selecione a opcao desejada: ");
	scanf("%d", &opcao); //Ler do usuario a opcao desejada

	switch (opcao)
	{
	case 1:
		mainAluno();
		break;
	/*	
	case 2:
		cadastroProfessor();
		break;
		
	case 3:
		cadastroDisciplina();
		break;
	*/
	default:
		printf("\nOPCAO INCORRETA!\n\n");
	}

	return 0;
}



