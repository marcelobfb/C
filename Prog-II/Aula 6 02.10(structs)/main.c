// #include <stdio.h>

// struct aluno
// {
//     char nome[50];
//     float nota[3];
//     float media;
// };
// int main()
// {
//     struct aluno aluno;
//     float soma = 0;
//     printf("Qual nome do aluno: ");
//     fgets(aluno.nome,50,stdin);
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Digite a %d nota do aluno: ", i + 1);
//         scanf("%f", &aluno.nota[i]);
//         soma += aluno.nota[i];
//     }
//     aluno.media = soma / 3;
//     printf("\nNome: %s", aluno.nome);
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Nota %d: %.2f\n", i + 1, aluno.nota[i]);
//     }
//     printf("Media: %.2f\n", aluno.media);
//     return 0;
// }
#include <stdio.h>

struct tempo {
    int horas;
    int minutos;
};

typedef struct tempo tempo;

tempo minutoparahora(int x);

int main() {
    int totalMinutos;
    printf("Digite o número de minutos: ");
    scanf("%d", &totalMinutos);
    tempo resultado = minutoparahora(totalMinutos);
    printf("%d minutos equivalem a %d horas e %d minutos.\n", totalMinutos, resultado.horas, resultado.minutos);
    return 0;
}

tempo minutoparahora(int x) {
    tempo temp;
    temp.horas = x / 60;
    temp.minutos = x % 60;
    return temp;
}