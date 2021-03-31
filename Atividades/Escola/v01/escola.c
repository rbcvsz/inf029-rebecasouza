// Projeto escola V1

#include <stdio.h>
#include "cadastroAluno.h"
#include "cadastroProfessor.h"
#include "cadastroDisciplina.h"
#include "editarDisciplina.h"

int quantidade; // variavel global para atender a chamada da função na linha '37'

struct Aluno
{
	int matricula[6];
	char nome[100];
	char sexo[2]; //F, f, M, m, O, o
	char nascimento[11];
	char cpf[12];
};

struct Professor
{
	int matricula[6];
	char nome[100];
	char sexo[2]; //F, f, M, m, O, o
	char nascimento[11];
	char cpf[12];
};

struct Disciplina
{
	char nome[30];
	int codigo[7];
	char semestre[7];
	char professor[100];
};

int cadastroAluno(int quantidade);
void cadastroProfessor();
void cadastroDisciplina();
void editarDisciplina();

void imprimeLinha(void);

int main(){

	struct Aluno dadosAluno[quantidade];

	int opcao; // variavel que recebe qual opção o usuario deseja cadastrar

	imprimeLinha();
	printf("\n--------------- SISTEMA DE CADASTRO # ESCOLA ---------------\n");
	imprimeLinha();
	printf("\n1 - Cadastro de Alunos\n2 - Cadastro de Professores\n3 - Cadastro de Disciplinas\n4 - Alterar Disciplina\n\n");
	printf("-> Selecione a opcao desejada: ");
	scanf("%d", &opcao); //Ler do usuario a opcao desejada

	switch (opcao){
		case 1:
			printf("-> Quantos alunos deseja cadastrar? ");
			scanf("%d", &quantidade); // passagem da quantidade de vezes que a função será executada por parametro
			cadastroAluno(quantidade);
			break;
		case 2:
			cadastroProfessor();
			break;
		case 3:
			cadastroDisciplina();
			break;
		case 4:
			editarDisciplina();
			break;
		default:
			printf("\nOPCAO INCORRETA!\n\n");
	}

	return 0;

}

void imprimeLinha(void){
	printf("\n------------------------------------------------------------\n");

}
