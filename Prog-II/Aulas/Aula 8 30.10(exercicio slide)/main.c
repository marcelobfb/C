#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

// struct alunos
// {
//     char nome[40];
//     float notas[3];
// };
// typedef struct alunos aluno;
// void imprimirNomeMaiorNota(aluno *alunos, int qtdAlunos);

// int main()
// {
//     int qtd;
//     aluno *alunos;

//     printf("qual a qtd de alunos? ");
//     scanf("%d",&qtd);

//     alunos=(aluno*) malloc(qtd*sizeof(aluno));
//     getchar();
//     for (int i = 0; i < qtd; i++)
//     {
//         printf("Nome: ");
//         fgets(alunos[i].nome,sizeof(alunos[i].nome),stdin);
//         for (int j = 0; j < 3; j++)
//         {
//             printf("Nota: ");
//             scanf("%f",&alunos[i].notas[j]);
//         }
//         getchar();
//     }
    
//     imprimirNomeMaiorNota(alunos,qtd);

//     return 0;
// }
// void imprimirNomeMaiorNota(aluno *alunos, int qtdAlunos){
//     float maiorNota=0;
//     int indexAluno=0;

//     for (int i = 0; i < qtdAlunos; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if(alunos[i].notas[j]>maiorNota){
//                 maiorNota=alunos[i].notas[j];
//                 indexAluno=i;
//             }
//         }
        
//     }
    
// printf("nome da maior nota: %s",alunos[indexAluno].nome);
// }

