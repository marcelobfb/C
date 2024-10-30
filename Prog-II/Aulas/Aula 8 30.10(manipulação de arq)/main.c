#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE *arquivo;
    arquivo=fopen("teste.txt","a");
    if(arquivo==NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }
    printf("Digite os caracteres: ");
    
    fclose(arquivo);
    return 0;
}
