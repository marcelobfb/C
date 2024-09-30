// TDE 1

// 1

// #include <stdio.h>

// int main()
// {
//     int matriz[2][4];
//     int resultado[2][4];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             printf("Numero: ");
//             scanf("%d", &matriz[i][j]);
//         }
//     }

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 4; j++) {
//             resultado[i][j] = 2 * matriz[i][j];
//         }
//     }

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             printf("[%d]", resultado[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 2

// #include <stdio.h>

// int main() {
//     int A[3][3], B[3][3], resultado[3][3];
//     int i, j;

//     printf("matriz A (3x3):\n");
//     for(i = 0; i < 3; i++) {
//         for(j = 0; j < 3; j++) {
//             printf("A[%d][%d]: ", i+1, j+1);
//             scanf("%d", &A[i][j]);
//         }
//     }

//     printf("\nmatriz B (3x3):\n");
//     for(i = 0; i < 3; i++) {
//         for(j = 0; j < 3; j++) {
//             printf("B[%d][%d]: ", i+1, j+1);
//             scanf("%d", &B[i][j]);
//         }
//     }

//     for(i = 0; i < 3; i++) {
//         for(j = 0; j < 3; j++) {
//             resultado[i][j] = 3 * A[i][j] - B[i][j];
//         }
//     }

//     printf("\nResultado (3 * A - B):\n");
//     for(i = 0; i < 3; i++) {
//         for(j = 0; j < 3; j++) {
//             printf("[%d] ", resultado[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// 3
// #include <stdio.h>

// int main()
// {
//     int matriz[5][2], transposta[2][5];

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("Matriz Original [%d][%d]: ", i + 1, j + 1);
//             scanf("%d", &matriz[i][j]);
//             transposta[j][i] = matriz[i][j];
//         }
//     }
//     printf("\nMatriz Original:\n");
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("[%d] ", matriz[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nMatriz Transpota:\n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             printf("[%d] ", transposta[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 4
// #include <stdio.h>

// int main()
// {
//     int matriz[4][2],matrizb[2][4], transposta[2][4], resultado[2][4];

//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("Matriz A [%d][%d]: ", i + 1, j + 1);
//             scanf("%d", &matriz[i][j]);
//             transposta[j][i] = matriz[i][j];
//         }
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             printf("Matriz B [%d][%d]: ", i + 1, j + 1);
//             scanf("%d", &matrizb[i][j]);
//         }
//     }

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 4; j++) {
//             resultado[i][j] = transposta[i][j] * matrizb[i][j];
//         }
//     }

//     printf("\nMatriz A:\n");
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("[%d] ", matriz[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nMatriz B:\n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             printf("[%d] ", matrizb[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\nMatriz Resultado a*b:\n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             printf("[%d] ", resultado[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// 5
// #include <stdio.h>

// int main()
// {
//     int matriz[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (j > i)
//             {
//                 printf("%d ", matriz[i][j]);
//             }
//             else
//             {
//                 printf("* ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 6
// #include <stdio.h>

// int main()
// {
//     int matriz[4][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12},
//         {13, 14, 15, 16}};
//     int soma=0;
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (j <= i)
//             {
//                 printf("%d ", matriz[i][j]);
//                 soma+=matriz[i][j];
//             }
//             else
//             {
//                 printf("* ");
//             }
//         }
//         printf("\n");
//     }
//     printf("A soma de todos os valores do triângulo inferior da diagonal principal, incluindo a diagonal principal de uma matriz 4x4 é: %d\n",soma);
//     return 0;
// }

// 7
// #include <stdio.h>

// int main()
// {
//     int matriz[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}};
//     int maior = 0;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (i + j < 2)
//             {
//                 if (matriz[i][j] > maior)
//                 {
//                     maior = matriz[i][j];
//                 }
//             }
//         }
//     }
//     printf("O maior valor acima da diagonal secundária é %d.\n", maior);
//     return 0;
// }

// 8
// #include <stdio.h>

// int main()
// {
//     float matriz[4][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12},
//         {13, 14, 15, 16}};
//         //  {0,0, 0,1, 0,2, 0,3},
//         // {1,0, 1,1, 1,2, 1,3},
//         // {2,0, 2,1, 2,2, 2,3},
//         // {3,0, 3,1, 3,2, 3,3}};
//     float parcial=0;
//     int count=0;
//     float media=0;
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (i + j >=4)
//             {
//                 parcial=parcial+matriz[i][j];
//                 count++;
//             }
//         }
//     }
//     media=parcial/count;
//     printf("A media é %.2f.\n", media);
//     return 0;
// }

// 9