#include <stdio.h>
#include <string.h>
//exercicio 1

// int main() {
//     int numeros[5];
//     char nomeArquivo[100];
//     FILE *arquivo;

//     printf("Digite 5 numeros inteiros.\n");
//     for (int i = 0; i < 5; i++) {
//         printf("Numero %d: ", i + 1);
//         scanf("%d", &numeros[i]);
//     }

//     printf("Digite o nome do arquivo: ");
//     scanf("%s", nomeArquivo);

//     arquivo = fopen(nomeArquivo, "w");
//     if (arquivo == NULL) {
//         printf("Erro ao abrir o arquivo.\n");
//         return 1;
//     }

//     for (int i = 0; i < 5; i++) {
//         fprintf(arquivo, "%d\n", numeros[i]);
//     }

//     fclose(arquivo);

//     arquivo = fopen(nomeArquivo, "r");
//     if (arquivo == NULL) {
//         printf("Erro ao abrir o arquivo.\n");
//         return 1;
//     }

//     for (int i = 0; i < 5; i++) {
//         fscanf(arquivo, "%d", &numeros[i]);
//     }

//     fclose(arquivo);

//     printf("Numeros lidos:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("Numero %d: %d\n", i + 1, numeros[i]);
//     }

//     return 0;
// }

// exercicio 2

// int main()
// {
//     char texto[100];
//     int count = 0;
//     char letra;

//     FILE *arquivo = fopen("texto.txt", "w");

//     if (arquivo == NULL)
//     {
//         printf("Erro ao abrir o arquivo.\n");
//         return 1;
//     }

//     printf("Digite uma frase.\n");
//     printf("Frase: ");
//     fgets(texto, sizeof(texto), stdin);

//     fprintf(arquivo, "%s", texto);

//     fclose(arquivo);

//     arquivo = fopen("texto.txt", "r");
//     while (letra != EOF)
//     {
//         letra = getc(arquivo);
//         if (letra >= 0 && letra <= 127 && letra != ' ' && letra != '\n')
//         {
//             count++;
//         }
//     }
//     printf("Qtd: %d\n", count);
//     fclose(arquivo);
//     return 0;
// }

// ex3

int main()
{
    FILE *arquivo;
    char frase[100];
    int qtdLinhas=0;
    int qtdPalavras=0;

    arquivo=fopen("registro.txt","r");
    if(arquivo==NULL){
        printf("erro");
        return 1;
    }
    while (fgets(frase,sizeof(frase),arquivo)!=NULL)
    {
        qtdLinhas++;
        char *palavras=strtok(frase, " \t\n");
        while (palavras!=NULL)
        {
            qtdPalavras++;
            palavras=strtok(NULL, " \t\n");
        }
        
    }
    printf("%d Linhas e %d palavras\n",qtdLinhas,qtdPalavras);

    return 0;
}
