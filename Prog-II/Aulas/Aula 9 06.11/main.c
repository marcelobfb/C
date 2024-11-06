#include <stdio.h>
//exercicio 1

int main() {
    int numeros[5];
    char nomeArquivo[100];
    FILE *arquivo;

    printf("Digite 5 numeros inteiros.\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        fprintf(arquivo, "%d\n", numeros[i]);
    }

    fclose(arquivo);

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        fscanf(arquivo, "%d", &numeros[i]);
    }

    fclose(arquivo);

    printf("Numeros lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: %d\n", i + 1, numeros[i]);
    }

    return 0;
}