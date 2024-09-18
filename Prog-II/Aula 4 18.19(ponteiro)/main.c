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

int main(){
    char frase[100];
    printf("Nome completo: ");
    fgets(frase,sizeof(frase),stdin);
    printf("Olá %s",frase);
    return 0;
}

void receberVetor(int vetor[]);
int main(){
    int numeros[4];
    printf("Digite 4 numeros inteiros: ");
    scanf("%d")
    receberVetor(numeros);
    return 0;
}
void receberVetor(int vetor[]){
    for(int i =0;i<sizeof(vetor);i++){
        *(vetor+i)=i;
    }
}
