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

// 2

// #include <stdio.h>

// struct tempo {
//     int horas;
//     int minutos;
// };

// typedef struct tempo tempo;

// tempo minutoparahora(int x);

// int main() {
//     int totalMinutos;
//     printf("Digite o número de minutos: ");
//     scanf("%d", &totalMinutos);
//     tempo resultado = minutoparahora(totalMinutos);
//     printf("%d minutos equivalem a %d horas e %d minutos.\n", totalMinutos, resultado.horas, resultado.minutos);
//     return 0;
// }

// tempo minutoparahora(int x) {
//     tempo temp;
//     temp.horas = x / 60;
//     temp.minutos = x % 60;
//     return temp;
// }

// 3

#include <stdio.h>

struct endereco {
    char rua[80];
    char cidade[80];
    char estado[80];
};
typedef struct endereco endereco;

struct pessoa {
    char nome[80];
    endereco endereco;
};
typedef struct pessoa pessoa;

void recebe(pessoa tmp);

int main() {
    pessoa p1;
    printf("Qual seu nome: ");
    fgets(p1.nome,80,stdin);
    printf("Qual sua rua: ");
    fgets(p1.endereco.rua,80,stdin);
    printf("Qual sua cidade: ");
    fgets(p1.endereco.cidade,80,stdin);
    printf("Qual seu estado: ");
    fgets(p1.endereco.estado,80,stdin);
    recebe(p1);
    return 0;
}
void recebe(pessoa tmp){
    printf("O nome da pessoa é %sMora na rua %sNa cidade %sNo estado %s",tmp.nome,tmp.endereco.rua,tmp.endereco.cidade,tmp.endereco.estado);
}