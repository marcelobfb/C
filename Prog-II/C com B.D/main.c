#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 100
#define NOME_ARQUIVO "nomes.txt"

void cadastrar_nome()
{
    FILE *arquivo = fopen(NOME_ARQUIVO, "a");
    if (arquivo == NULL)
    {
        perror("Erro ao abrir o arquivo");
        return;
    }

    char nome[MAX_NOME];
    printf("Digite um nome para cadastrar (ou 'sair' para encerrar): ");
    while (1)
    {
        fgets(nome, MAX_NOME, stdin);
        nome[strcspn(nome, "\n")] = 0;

        if (strcmp(nome, "sair") == 0)
        {
            break;
        }

        fprintf(arquivo, "%s\n", nome);
        printf("Nome cadastrado! Digite outro nome (ou 'sair' para encerrar): ");
    }

    fclose(arquivo);
}

void listar_nomes()
{
    FILE *arquivo = fopen(NOME_ARQUIVO, "r");
    if (arquivo == NULL)
    {
        printf("Nenhum nome cadastrado ainda.\n");
        return;
    }

    char nome[MAX_NOME];
    printf("Nomes cadastrados:\n");
    while (fgets(nome, MAX_NOME, arquivo) != NULL)
    {
        printf("- %s", nome);
    }

    fclose(arquivo);
}

void deletar_nome()
{
    FILE *arquivo = fopen(NOME_ARQUIVO, "r");
    if (arquivo == NULL)
    {
        printf("Nenhum nome cadastrado ainda.\n");
        return;
    }

    char nome[MAX_NOME];
    char nomes[100][MAX_NOME];
    int contador = 0;

    while (fgets(nome, MAX_NOME, arquivo) != NULL)
    {
        nome[strcspn(nome, "\n")] = 0; // Remove o caractere de nova linha
        strcpy(nomes[contador++], nome);
    }
    fclose(arquivo);

    // Exibe os nomes cadastrados para o usuário
    printf("Nomes cadastrados:\n");
    for (int i = 0; i < contador; i++)
    {
        printf("%d. %s\n", i + 1, nomes[i]);
    }

    int opcao;
    printf("Escolha o número do nome para deletar (ou 0 para cancelar): ");
    scanf("%d", &opcao);
    getchar(); // Limpa o buffer do stdin

    if (opcao > 0 && opcao <= contador)
    {
        // Reescreve o arquivo sem o nome selecionado
        arquivo = fopen(NOME_ARQUIVO, "w");
        for (int i = 0; i < contador; i++)
        {
            if (i != opcao - 1)
            { // Ignora o nome a ser deletado
                fprintf(arquivo, "%s\n", nomes[i]);
            }
        }
        fclose(arquivo);
        printf("Nome deletado com sucesso!\n");
    }
    else if (opcao != 0)
    {
        printf("Opção inválida! Nenhum nome deletado.\n");
    }
}

int main()
{
    int opcao;

    do
    {
        printf("\n1. Cadastrar Nome\n");
        printf("2. Listar Nomes\n");
        printf("3. Deletar Nome\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o buffer do stdin

        switch (opcao)
        {
        case 1:
            cadastrar_nome();
            break;
        case 2:
            listar_nomes();
            break;
        case 3:
            deletar_nome();
            break;
        case 4:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
