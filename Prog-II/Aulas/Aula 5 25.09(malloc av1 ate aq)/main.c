// ultima materia da av1 malloc - alocacao dinamica de memoria

// char *p;
// p=(char *) malloc(1000);//1000 caracteres
// int *p;
// p=(int *)malloc(50*sizeof(int));//200 caracteres, 50x4=200
//
#include <stdio.h>
#include <stdlib.h>
// int main()
// {
//     int *p = malloc(5 * sizeof(int));
//     for (int i = 0; i < 5; i++)
//     {
//         p[i] = i + 1;
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d", p[i]);
//     }
//     printf("\n");
//     p = realloc(p, 3 * sizeof(int));
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d", p[i]);
//     }
//     p = realloc(p, 10 * sizeof(int));
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d", p[i]);
//     }
//     free(p);
//     return 0;
// }

// exercicio 1

// int main()
// {
//     float tamanho;
//     float media = 0;
//     float parcial = 0;
//     printf("Tamanho do array: ");
//     scanf("%f", &tamanho);

//     float *array = (float *)malloc(tamanho * sizeof(float));
//     if (array == NULL)
//     {
//         printf("memoria n alocada\n");
//         exit(0);
//     }

//     for (int i = 0; i < tamanho; i++)
//     {
//         printf("Digite numero %d: ", i + 1);
//         scanf("%f", &array[i]);
//         parcial = parcial + array[i];
//     }
//     media = parcial / tamanho;
//     printf("Os numeros são:\n");
//     for (int i = 0; i < tamanho; i++)
//     {
//         printf("Number %d: %.2f\n", i + 1, array[i]);
//     }
//     printf("A media é %.2f\n", media);
//     free(array);

//     return 0;
// }

// exercicio 2

// int main()
// {
//     int menor = 0;
//     int maior = 0;
//     int **matriz = (int **)malloc(3 * sizeof(int *));
//     if (matriz == NULL)
//     {
//         printf("memoria n alocada\n");
//         exit(0);
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         matriz[i] = (int *)malloc(2 * sizeof(int));
//         for (int j = 0; j < 2; j++)
//         {
//             printf("Numero: ");
//             scanf("%d", &matriz[i][j]);
//             if (matriz[i][j] < menor || i == 0)
//             {
//                 menor = matriz[i][j];
//             }
//             if (matriz[i][j] > maior)
//             {
//                 maior = matriz[i][j];
//             }
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("[%d]", matriz[i][j]);
//         }
//         printf("\n");
//     }
//     printf("O menor numero é %d e o maior é %d\n", menor, maior);
//     return 0;
// }

// exercicio 3
char *preencheAlfabeto(int tam);
int main()
{
    int i, tam = 10;
    char *vetor;
    vetor = preencheAlfabeto(tam);
    if (vetor != NULL)
    {
        for (i = 0; i < tam; i++)
        {
            printf("%c ", vetor[i]);
        }
        printf("\n");
        free(vetor);
    }
    return 0;
}
char *preencheAlfabeto(int tam)
{
    char *vetor = (char *)malloc(tam * sizeof(char));
    if (vetor == NULL)
    {
        printf("erro ao alocar memoria\n");
        return NULL;
    }
    for (int i = 0; i < tam; i++)
    {
        vetor[i] = 'a' + i;
    }
    return vetor;
}