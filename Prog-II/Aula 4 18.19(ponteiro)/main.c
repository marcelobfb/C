#include <stdio.h>
// *=é igual conteudo
// void linha();
// int main()
// {
//     linha();
//     int x=5;
//     int *ptr=&x;
//     int y = *ptr;
//     printf("%d %d\n",x,y);
//     linha();
//     int *p,*p1;
//     int c=10,d=20;
//     p=&c;
//     p1=&d;
//     *p1=*p;
//     printf("%d %d\n",c,d);
//     linha();
//     return 0;
// }

void linha()
{
    printf("--------------------------------------------------------------------------\n");
}

// int main()
// {
//     int a=3,b=4,c=5;
//     int *pa=&a,*pb=&b,*pc=&c;
//     a=b*c;
//     printf("a=%d b=%d c=%d pa=%p pb=%p pc=%p\n", a, b, c, (void*)pa, (void*)pb, (void*)pc);
//     a*=c;
//     printf("a=%d b=%d c=%d pa=%p pb=%p pc=%p\n", a, b, c, (void*)pa, (void*)pb, (void*)pc);
//     b=*pa;
//     printf("a=%d b=%d c=%d pa=%p pb=%p pc=%p\n", a, b, c, (void*)pa, (void*)pb, (void*)pc);
//     pc=pa;
//     printf("a=%d b=%d c=%d pa=%p pb=%p pc=%p\n", a, b, c, (void*)pa, (void*)pb, (void*)pc);
//     *pb=b*c;
//     printf("a=%d b=%d c=%d pa=%p pb=%p pc=%p\n", a, b, c, (void*)pa, (void*)pb, (void*)pc);
//     c=(*pa)*(*pc);
//     printf("a=%d b=%d c=%d pa=%p pb=%p pc=%p\n", a, b, c, (void*)pa, (void*)pb, (void*)pc);
//     *pc=a*(*pb);
//     printf("a=%d b=%d c=%d pa=%p pb=%p pc=%p\n", a, b, c, (void*)pa, (void*)pb, (void*)pc);
//     return 0;
// }

// void troca(int *pa, int *pb);
// int main()
// {
//     int a=10,b=20;
//     troca(&a,&b);
//     printf("a=%d b=%d\n",a,b);
//     return 0;
// }
// void troca(int *pa, int *pb){
//     int tmp=*pb;
//     *pb=*pa;
//     *pa=tmp;
// }

// int main(){
//     char frase[100];
//     printf("Nome completo: ");
//     fgets(frase,sizeof(frase),stdin);
//     printf("Olá %s",frase);
//     return 0;
// }

// exercico 1
// void receberVetor(int vetor[], int* maior, int* menor);
// int main() {
//     int numeros[4];
//     int maior, menor;
//     for (int i = 0; i < sizeof(numeros) / sizeof(numeros[0]); i++) {
//         printf("%d numero: ", i + 1);
//         scanf("%d", &numeros[i]);
//     }
//     receberVetor(numeros, &maior, &menor);
//     printf("Maior: %d\n", maior);
//     printf("Menor: %d\n", menor);
//     return 0;
// }
// void receberVetor(int vetor[], int* maior, int* menor) {
//     *maior = vetor[0];
//     *menor = vetor[0];
//     for (int i = 1; i < 4; i++) {
//         if (*(vetor+i) > *maior) {
//             *maior = vetor[i];
//         }
//         if (*(vetor+i) < *menor) {
//             *menor = vetor[i];
//         }
//     }
// }

float receberVetor(float vetor[], float *maior, float *menor, float *media);
int main()
{
    float numeros[5];
    float maior = 0, menor = 0;
    float soma = 0;
    float media = 0;
    for (int i = 0; i < sizeof(numeros) / sizeof(numeros[0]); i++)
    {
        printf("%d numero: ", i + 1);
        scanf("%f", &numeros[i]);
    }
    receberVetor(numeros, &maior, &menor, &media);
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Media: %.2f\n", media);
    return 0;
}
float receberVetor(float vetor[], float *maior, float *menor, float *media)
{
    float soma = 0;
    for (int i = 0; i < 5; i++)
    {
        if (*(vetor + i) > *maior)
        {
            *maior = vetor[i];
        }
        if (*(vetor + i) < *menor || i == 0)
        {
            *menor = vetor[i];
        }
        soma += vetor[i];
    }
    *media = soma / 5;
}