#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 100
#define NOME_ARQUIVO "nomes.txt"

void cadastrar_nome() {
    FILE *arquivo = fopen(NOME_ARQUIVO, "a");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    char nome[MAX_NOME];
    printf("Digite um nome para cadastrar (ou 'sair' para encerrar): ");
    while (1) {
        fgets(nome, MAX_NOME, stdin);
        nome[strcspn(nome, "\n")] = 0; // Remove o caractere de nova linha

        if (strcmp(nome, "sair") == 0) {
            break;
        }

        fprintf(arquivo, "%s\n", nome);
        printf("Nome cadastrado! Digite outro nome (ou 'sair' para encerrar): ");
    }

    fclose(arquivo);
}

void listar_nomes() {
    FILE *arquivo = fopen(NOME_ARQUIVO, "r");
    if (arquivo == NULL) {
        printf("Nenhum nome cadastrado ainda.\n");
        return;
    }

    char nome[MAX_NOME];
    printf("Nomes cadastrados:\n");
    while (fgets(nome, MAX_NOME, arquivo) != NULL) {
        printf("- %s", nome);
    }

    fclose(arquivo);
}

int main() {
    int opcao;

    do {
        printf("\n1. Cadastrar Nome\n");
        printf("2. Listar Nomes\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o buffer do stdin

        switch (opcao) {
            case 1:
                cadastrar_nome();
                break;
            case 2:
                listar_nomes();
                break;
            case 3:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
