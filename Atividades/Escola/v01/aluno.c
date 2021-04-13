#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int matricula;
    char nome[100];
    char sexo; //F, f, M, m, O, o
    char data[11];
    char cpf[15];

} Aluno;



int cadastrarAluno(Aluno listaAlunos[], int qtd);
void listarAluno(Aluno listaAlunos[], int qtd);

int mainAluno()
{
    Aluno listaAlunos[5];
    int qtdAlunos = 0;

    //printf("Main aluno\n");
    int opcao;
    int retorno;
    int sair = 0;
    while (!sair)
    {
        printf("\n--------------- SISTEMA DE CADASTRO # ALUNO ---------------\n");
        printf("\n0 - Sair\n1 - Cadastrar Aluno\n2 - Listar Aluno\n\n");
        printf("-> Selecione a opcao desejada: ");
        scanf("%d", &opcao); //Ler do usuario a opcao desejada

        switch (opcao)
        {
        case 0:
            sair = 1;
            break;
        case 1:
            retorno = cadastrarAluno(listaAlunos, qtdAlunos);
            if (retorno == 1)
                qtdAlunos++;
            break;
        case 2:
            listarAluno(listaAlunos, qtdAlunos);
            break;
        default:
            printf("\nOPCAO INCORRETA!\n\n");
        }
    }

    return 0;

}

int cadastrarAluno(Aluno listaAlunos[], int qtd)
{
    printf("\nDigite a Matricula: ");
    scanf("%d", &listaAlunos[qtd].matricula);
    fflush(stdin);
    printf("Digite o nome: ");
    getchar();
    fgets(listaAlunos[qtd].nome,100,stdin);
    printf("Digite o sexo: ");
    listaAlunos[qtd].sexo = getchar();
    printf("Data Nascimento (DD/MM/AAAA): ");
    getchar();
    fgets(listaAlunos[qtd].data,11,stdin);
    printf("CPF: ");
    getchar();
    fgets(listaAlunos[qtd].cpf,15,stdin);

    return 1;
}

void listarAluno(Aluno listaAlunos[], int qtd)
{
    printf("\n--------------- LISTA DE ALUNOS CADASTRADOS ----------------\n");
    
    for (int i = 0; i < qtd; i++)
    {
        printf("\n\nMatricula: %d", listaAlunos[i].matricula);
        printf("\nNome: %s", listaAlunos[i].nome);
        printf("Sexo: ");
        putchar(listaAlunos[i].sexo);
        printf("\nData: %s", listaAlunos[i].data);
        printf("\nCPF: %s", listaAlunos[i].cpf);
    }
}

void imprimeLinha(void)
{
    printf("\n------------------------------------------------------------\n"); 
}
