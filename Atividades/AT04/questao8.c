/*
Crie um programa que tenha uma função cadastrarCliente. Essa função deve ler os dados do
cliente (nome, dataNascimento, cpf, sexo) e retornar os dados do cliente. A função main deve
imprimir os dados do cliente.
*/

#include <stdio.h>


struct Cliente
{
	char nome[30];
	char dataNascimento[11];
	char cpf[12];
	char sexo[2];
};

struct Cliente cadastrarCliente (struct Cliente pessoa)
{
	printf("\n\n#### ENTRE COM AS INFORMACOES DO CLIENTE ####\n\n");
	printf("Nome: ");
	scanf("%s", pessoa.nome);
	printf("Data Nascimento: ");
	scanf("%s", pessoa.dataNascimento);
	printf("CPF: ");
	scanf("%s", pessoa.cpf);
	printf("Sexo: ");
	scanf("%s", pessoa.sexo);

	return pessoa;

}

int main(){

	struct Cliente cadastrarCliente (struct Cliente pessoa);
	struct Cliente cadastro;
	struct Cliente resultado;
	
	resultado = cadastrarCliente(cadastro);

	printf("\n\n#### INFORMACOES CADASTRADAS ####\n\n");
	printf("Nome do cliente: %s\n", resultado.nome);
	printf("Data de Nascimento: %s\n", resultado.dataNascimento);
	printf("CPF: %s\n", resultado.cpf);
	printf("Sexo: %s\n\n", resultado.sexo);

}
