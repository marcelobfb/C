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



// int main(){
//     int matriz[5][2];
//     int transposta[2][5];
//     for(int i=0;i<5;i++){
//         for(int j=0;j<2;j++){
//             printf("Digite o numero da posicao [%d] [%d] da matriz: ",i,j);
//             scanf("%d",&matriz[i][j]);
//             transposta[j][i]=matriz[i][j];
//         }
//     }   
//     printf("Matriz A: \n");
//     for(int i=0;i<5;i++){
//         for(int j=0;j<2;j++){
//             printf("[%d]",matriz[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Matriz Transposta: \n");
//     for(int i=0;i<2;i++){
//         for(int j=0;j<5;j++){
//             printf("[%d]",transposta[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// av1
//1
// int main(){
//     float matriz[3][3];
//     float soma=0;
//     float media=0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("Digite o numero para a posicao [%d] [%d] da matriz: ",i,j);
//             scanf("%f",&matriz[i][j]);
//             if(i+j==2){
//                 soma=soma+matriz[i][j];
//             }
//         }
//     }
//     media=soma/3;
//     printf("A media dos numeros pertencentes a diagonal secundaria da matriz: %.2f\n",media);
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (i+j==2)
//             {
//                 printf("[%.2f] ",matriz[i][j]);
//             }
//             else{
//                 printf("%.2f ",matriz[i][j]);
//             }
            
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// 2
// float maiorPeso(float peso[4]);
// int main(){
//     float peso[4];
//     for (int i = 0; i < 4; i++)
//     {
//         printf("Qual teu peso: ");
//         scanf("%f",&peso[i]);
//     }
//     printf("O maior peso entre eles: %.2f",maiorPeso(peso));
//     return 0;
// }
// float maiorPeso(float peso[4]){
//     float maior=0;
//     for (int i = 0; i < 4; i++)
//     {
//         if(peso[i]>maior){
//             maior=peso[i];
//         }
//     }
//     return maior;
// }


// void contar_palavras(char *frase, int *numPalavras);
// int main(){
//     char frase[300];
//     int qtd=0;
//     printf("Frase: ");
//     fgets(frase,sizeof(frase),stdin);
//     contar_palavras(frase,&qtd);
//     printf("A frase tem %d palavras\n",qtd);
    
//     return 0;
// }
// void contar_palavras(char *frase, int *numPalavras){
//     while (*frase != '\0')
//     {
//         if (*frase == ' '|| *frase == '\n')
//         {
//             (*numPalavras)++;
//         }
//         frase++;
//     }
    
// }



// chat gpt exercicios

// int main( ){
//     int matriz[4][4];
//     int soma=0;
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             printf("Digite a posição [%d][%d] da matriz: ",i,j);
//             scanf("%d",&matriz[i][j]);
//             if(i==j){
//                 soma=soma+matriz[i][j];
//             }
//         }
        
//     }
//     printf("A matriz: \n");
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             printf("[%d]",matriz[i][j]);
//         }
//         printf("\n");
//     }
//     printf("A soma da vertical principal: %d",soma);
//     return 0;
// }



// 2
// float media_idades(float idades[5]);
// int main(){
//     float idades[5];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("idade: ");
//         scanf("%f",&idades[i]);
//     }
//     printf("A media das idades: %.2f",media_idades(idades));

//     return 0;
// }
// float media_idades(float idades[5]){
//     float soma=0;
//     float media=0;
//     for (int i = 0; i < 5; i++)
//     {
//         soma=soma+idades[i];
//     }
//     media=soma/5;
//     return media;
// }


// 3

// void conta_maiusculas(char *frase, int *numMaiusculas);
// int main(){
//     char frase[300];
//     int numMaiusculas=0;
//     printf("frase: ");
//     fgets(frase,sizeof(frase),stdin);
//     conta_maiusculas(frase,&numMaiusculas);
//     printf("Foram digitados %d letras maiusculas.",numMaiusculas);
//     return 0;
// }
// void conta_maiusculas(char *frase, int *numMaiusculas){
//     while(*frase != '\0'||*frase !='\n'){
//         if(*frase >= 'A' && *frase <= 'Z'){
//             (*numMaiusculas)++;
//         }
//         frase++;
//     }
// }


// 4

// int main(){
//     float matriz [2][3];
//     float transposta[3][2];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("Numero: ");
//             scanf("%f",&matriz[i][j]);
//             transposta[j][i]=matriz[i][j];
//         }
        
//     }
//     printf("Matriz: \n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("[%.2f]",matriz[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Matriz Transpota: \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("[%.2f]",transposta[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// 5
// float media_temp(float temp[7]);
// int main(){
//     float temp[7];
//     for (int i = 0; i < 7; i++)
//     {
//         printf("temp: ");
//         scanf("%f",&temp[i]);
//     }
//     printf("A media das temperaturas é %.2f",media_temp(temp));
//     return 0;
// }
// float media_temp(float temp[7]){
//     float soma=0;
//     float media=0;
//     for (int i = 0; i < 7; i++)
//     {
//         soma=soma+temp[i];
//     }
//     return soma/7;
// }


// 6
void conta_vogais(char *frase, int *numVogais);
int main(){
    char frase[300];
    int numVogais=0;
    printf("frase: ");
    fgets(frase,sizeof(frase),stdin);
    conta_vogais(frase,&numVogais);
    printf("A frase tem %d vogais",numVogais);
    return 0;
}
void conta_vogais(char *frase, int *numVogais){
    while (*frase != '\n' && *frase != '\0')
    {
        if (*frase == 'a'|| *frase == 'e'|| *frase == 'i'|| *frase == 'o'|| *frase == 'u')
        {
            (*numVogais)++;
        }
        frase++;
    }
    
}