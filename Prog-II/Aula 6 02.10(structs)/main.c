#include <stdio.h>

struct aluno
{
    char nome[50];
    float nota[3];
    float media;
};
int main()
{
    struct aluno aluno;
    float soma = 0;
    printf("Qual nome do aluno: ");
    scanf("%s", aluno.nome);
    for (int i = 0; i < 3; i++)
    {
        printf("Digite a %d nota do aluno: ", i + 1);
        scanf("%f", &aluno.nota[i]);
        soma += aluno.nota[i];
    }
    aluno.media = soma / 3;
    printf("Nome: %s\n", aluno.nome);
    for (int i = 0; i < 3; i++)
    {
        printf("Nota %d: %.2f\n", i + 1, aluno.nota[i]);
    }
    printf("Media: %.2f\n", aluno.media);
    return 0;
}
