#include <stdio.h>

struct Aluno{
    char nome[40];
    int matricula;
};

typedef struct Aluno aluno;

int main()
{
    aluno alu;

    printf("Matricula: ");
    scanf("%d", &alu.matricula);
    getchar();
    printf("Nome: ");
    fgets(alu.nome,sizeof(alu.nome),stdin);
    return 0;
}
