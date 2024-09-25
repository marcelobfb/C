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
#include <stdio.h>
#include <stdlib.h>

int main() {
    float tamanho;
    float media=0;
    float parcial=0;
    printf("tamanho do array: ");
    scanf("%f", &tamanho);

    float* array = (float*) malloc(tamanho * sizeof(float));
    if(array == NULL) {
        printf("memoria n alocada\n");
        exit(0);
    }

    for(int i = 0; i < tamanho; i++) {
        printf("Digite numero %d: ", i+1);
        scanf("%f", &array[i]);
        parcial=parcial+array[i];
    }
    media=parcial/tamanho;
    printf("Os numeros são:\n");
    for(int i = 0; i < tamanho; i++) {
        printf("Number %d: %.2f\n", i+1, array[i]);
    }
    printf("A media é %.2f\n",media);
    free(array);

    return 0;
}