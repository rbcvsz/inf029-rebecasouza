// Projeto escola V1

#include <stdio.h>

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

void cadastroProfessor();
void cadastroAluno();
void cadastroDisciplina();
void editarDisciplina();

int main(){

	int opcao;

	printf("\n####### SISTEMA DE CADASTRO - ESCOLA #######\n");
	printf("1 - Cadastro de Alunos\n2 - Cadastro de Professores\n3 - Cadastro de Disciplinas\n4 - Alterar Disciplina\n\n");
	printf("Selecione a opcao desejada: ");
	scanf("%d", &opcao); //Ler do usuario a opcao desejada

	switch (opcao){
		case 1:
			cadastroAluno();
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

void cadastroAluno(void){
	printf("\n####### CADASTRO DE ALUNO #######\n");
	printf("\nInforme o nome do aluno: ");
	printf("\nMatricula: ");
	printf("\nSexo: ");
	printf("\nNascimento: ");
	printf("\nCPF: ");
	printf("\n\n");

}

void cadastroProfessor(void){
	printf("\n####### CADASTRO DE PROFESSOR #######\n");
	printf("\nInforme o nome do professor: ");
	printf("\nMatricula: ");
	printf("\nSexo: ");
	printf("\nNascimento: ");
	printf("\nCPF: ");
	printf("\n\n");

}

void cadastroDisciplina(void){
	printf("\n####### CADASTRO DE DISCIPLINA #######\n");
	printf("\nInforme o nome da disciplina: ");
	printf("\nCodigo: ");
	printf("\nSemestre: ");
	printf("\nProfessor: ");
	printf("\n\n");

}

void editarDisciplina(void){

}
