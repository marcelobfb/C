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
// #include <stdio.h>

// int soma(int x,int y);
// int subtracao(int x,int y);
// int multiplicacao(int x,int y);
// int divisao(int x,int y);

// int main()
// {
//     int x=0,y=0;
//     int resposta=0;
//     int sair=2;
//     printf("Qual primeiro numero: ");
//     scanf("%d",&x);
//     printf("Qual segundo numero: ");
//     scanf("%d",&y);
//     do{
//         printf("Qual operação deseja: 1- Soma, 2- Subtração, 3-Multiplicação, 4-Divisão: ");
//         scanf("%d",&resposta);
//         sair=resposta;
//     }while(sair<1||sair>4);
//     if(resposta==1){
//         printf("A soma dos numeros é %d\n",soma(x,y));
//     }
//     else if(resposta==2){
//         printf("A subtração dos numeros é %d\n",subtracao(x,y));
//     }
//     else if(resposta==3){
//         printf("A multiplicação dos numeros é %d\n",multiplicacao(x,y));
//     }
//     else if(resposta==4){
//         printf("A divisão dos numeros é %d\n",divisao(x,y));
//     }
//     return 0;
// }
// int soma(int x,int y){
//     return x+y;
// }
// int subtracao(int x,int y){
//     return x-y;
// }
// int multiplicacao(int x,int y){
//     return x*y;
// }
// int divisao(int x,int y){
//     return x/y;
// }

// 10
// #include <stdio.h>

// int tabuada(int x);

// int main()
// {
//     int n=0;
//     printf("Digite um número: ");
//     scanf("%d",&n);
//     tabuada(n);
//     return 0;
// }
// int tabuada(int x){
//     if(x>7){
//         for(int i=0;i<10;i++){
//             printf("%d x %d = %d\n",x,i+1,x*(i+1));
//         }
//     }
//     else{
//         for(int i=0;i<10;i++){
//             printf("7 x %d = %d\n",i+1,7*(i+1));
//         }
//     }
//     return x;
// }

// 11
// #include <stdio.h>

// int bigger(int x,int y,int z);

// int main()
// {
//     int n1=0,n2=0,n3=0;
//     printf("Digite primeiro número: ");
//     scanf("%d",&n1);
//     printf("Digite segundo número: ");
//     scanf("%d",&n2);
//     printf("Digite terceiro número: ");
//     scanf("%d",&n3);
//     printf("O maior numero é %d\n",bigger(n1,n2,n3));
//     return 0;
// }
// int bigger(int x, int y, int z) {
//     int maior = 0;
//     if (x >= y && x >= z) {
//         maior = x;
//     } else if (y >= x && y >= z) {
//         maior = y;
//     } else {
//         maior = z;
//     }
//     return maior;
// }

// 12
// #include <stdio.h>

// float aumentosalarial(float salario, char exp);

// int main()
// {
//     float salario=0;
//     char exp;

//     printf("Digite seu salario: ");
//     scanf("%f",&salario);
//     printf("Digite sua experiencia(s - Sênior, p - Pleno ou j - Júnior): ");
//     scanf(" %s",&exp);
//     printf("O novo salario é %.2f",aumentosalarial(salario,exp));
//     return 0;
// }
// float aumentosalarial(float salario, char exp) {
//     float aumento=0;
//     switch(exp){
//         case 's':aumento=salario*0.05;
//         break;
//         case 'p':aumento=salario*0.10;
//         break;
//         case 'j':aumento=salario*0.15;
//         break;
//     }
//     return salario+aumento;
// }

// 13
// #include <stdio.h>

// int soma(int x, int y, int z);
// void media(int x);

// int main() {
//     int n1 = 0, n2 = 0, n3 = 0;
//     printf("Digite primeiro número: ");
//     scanf("%d", &n1);
//     printf("Digite segundo número: ");
//     scanf("%d", &n2);
//     printf("Digite terceiro número: ");
//     scanf("%d", &n3);
//     int sum = soma(n1, n2, n3);
//     media(sum);
//     return 0;
// }

// int soma(int x, int y, int z) {
//     int somaresultado = x + y + z;
//     printf("A soma deles é %d\n", somaresultado);
//     return somaresultado;
// }

// void media(int x) {
//     float media = (float)x / 3;
//     printf("A media deles é %.2f\n", media);
// }

// 14
// #include <stdio.h>

// int pontos(int vitoria, int empate);

// int main() {
//     int vitoria=0,empate=0,derrota=0;
//     printf("Quantas vitorias seu time tem: ");
//     scanf("%d",&vitoria);
//     printf("Quantos empate seu time tem: ");
//     scanf("%d",&empate);
//     printf("Quantas derrotas seu time tem: ");
//     scanf("%d",&derrota);
//     printf("Seu time tem uma media de %d pontos",pontos(vitoria,empate));
//     return 0;
// }

// int pontos(int vitoria, int empate){
//     int pvitoria=0,pempate=0;
//     pvitoria=vitoria*3;
//     pempate=empate/empate;

//     return pvitoria+pempate;
// }

// 15
// a)25 -863510280 -863510280 25 50 -863510276
// b)valor endereço endereço valor valor endereço
// #include <stdio.h>
// int main()
// {
//     int a = 25;
//     int *pa = &a;
//     int b = *pa + a;
//     printf("%d %d %d %d %d %d\n", a, pa, &a, *pa, b, &b);
//     return 0;
// }
