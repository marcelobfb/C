#include <stdio.h>
// 0,0 0,1 0,2
// 1,0 1,1 1,2
// 2,0 2,1 2,2
// int main()
// {
//     float matriz[3][3];
//     float soma = 0;
//     float media = 0;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("Digite um número para a posição [%d] [%d]: ", i, j);
//             scanf("%f", &matriz[i][j]);
//             if (i + j == 2)
//             {
//                 soma = soma + matriz[i][j];
//             }
//         }
//     }
//     media = soma / 3;
//     printf("Matriz:\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%.2f ", matriz[i][j]);
//         }
//         printf("\n");
//     }
//     printf("A media dos numeros pertencentes à diagonal secundaria da matriz é: %.2f", media);
//     return 0;
// }
// 2
// float maiorPeso (float peso[4]);
// int main(){
//     float vetor[4];
//     for(int i=0;i<4;i++){
//         printf("Diga o %d peso: ",i+1);
//         scanf("%f",&vetor[i]);
//     }
//     printf("O maior peso é %.2f",maiorPeso(vetor));
//     return 0;
// }
// float maiorPeso (float peso[4]){
//     float maior=0;
//         for(int i=0;i<4;i++){
//             if(peso[i]>maior){
//                 maior=peso[i];
//             }
//     }
//     return maior;
// }

// 3
// void conta_palavras(char *frase,int *count);
// int main(){
//     char frase[100];
//     int count=0;
//     printf("Qual a frase: ");
//     fgets(frase,100,stdin);
//     printf("A frase é: %s",frase);
//     conta_palavras(frase,&count);
//     printf("A frase tem %d palavras",count);
//     return 0;
// }
// void conta_palavras(char *frase,int *count){
//     while(*frase !='\0'){
//         if(*frase==' '||*frase=='\n'){
//             (*count)++;
//         }
//         frase++;
//     }
// }


// 
// void contar_vogais(char *str,int *numCaracteres);
// int main(){
//     char str[100];
//     int numCaracteres=0;
//     int numMarcelo=0;
//     printf("Digite uma frase: ");
//     fgets(str,sizeof(str),stdin);
//     printf("A frase: %s",str);
//     contar_vogais(str,&numCaracteres);
//     printf("A frase tem %d vogais",numCaracteres);
//     return 0;
// }
// void contar_vogais(char *str,int *numCaracteres){
//     while(*str!='\0'){
//         if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'){
//             (*numCaracteres)++;
//         }
//         str++;
//     }
// }



int main(){
    int matriz[5][2];
    int transposta[2][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            printf("Digite o numero da posicao [%d] [%d] da matriz: ",i,j);
            scanf("%d",&matriz[i][j]);
            transposta[j][i]=matriz[i][j];
        }
    }   
    printf("Matriz A: \n");
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            printf("[%d]",matriz[i][j]);
        }
        printf("\n");
    }
    printf("Matriz Transposta: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            printf("[%d]",transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}