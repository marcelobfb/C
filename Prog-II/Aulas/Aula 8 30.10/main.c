#include <stdio.h>

// struct Aluno{
//     char nome[40];
//     int matricula;
// };

// typedef struct Aluno aluno;

// int main()
// {
//     aluno alu;

//     printf("Matricula: ");
//     scanf("%d", &alu.matricula);
//     getchar();
//     printf("Nome: ");
//     fgets(alu.nome,sizeof(alu.nome),stdin);
//     return 0;
// }


//ex4 slide 

// struct alunos
// {
//     char nome[40];
//     float nota[3];
// };
// typedef struct alunos aluno;
// float maiorNota(float nota[]);

// int main()
// {
//     aluno alu;
//     printf("Nome: ");
//     fgets(alu.nome,sizeof(alu.nome),stdin);
//     for (int i = 0; i < 3; i++)
//     {
//         printf("nota: ");
//         scanf("%f",&alu.nota[i]);
//     }
//     printf("A maior nota é %.2f\n",maiorNota(alu.nota));
//     return 0;
// }
// float maiorNota(float nota[]){
//     float mNota=0;
//     for (int i = 0; i < 3; i++)
//     {
//         if(nota[i]>mNota){
//             mNota=nota[i];
//         }
//     }
//     return mNota;
// }


// ex5 slide

struct alunos
{
    char nome[40];
    float nota[3];
};
typedef struct alunos aluno;
float maiorNota(float nota[]);

int main()
{
    aluno alu;
    printf("Nome: ");
    fgets(alu.nome,sizeof(alu.nome),stdin);
    for (int i = 0; i < 3; i++)
    {
        printf("nota: ");
        scanf("%f",&alu.nota[i]);
    }
    printf("A maior nota é %.2f\n",maiorNota(alu.nota));
    return 0;
}
float maiorNota(float nota[]){
    float mNota=0;
    for (int i = 0; i < 3; i++)
    {
        if(nota[i]>mNota){
            mNota=nota[i];
        }
    }
    return mNota;
}