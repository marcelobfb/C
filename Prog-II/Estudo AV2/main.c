#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 1
// 2
// struct cidade {
//     char nome[50];
//     int nHabitantes;
//     char prefeito[50];
// };

// struct prefeito {
//     char nome[50];
//     int idade;
//     char sexo[10];
// };

// int main() {
//     struct cidade cidade1;
//     struct prefeito prefeito1;

//     // Preenchendo os dados
//     printf("Digite o nome da cidade: ");
//     scanf(" %[^\n]s", cidade1.nome);
//     printf("Digite o número de habitantes: ");
//     scanf("%d", &cidade1.nHabitantes);
//     printf("Digite o nome do prefeito: ");
//     scanf(" %[^\n]s", cidade1.prefeito);

//     strcpy(prefeito1.nome, cidade1.prefeito);
//     printf("Digite a idade do prefeito: ");
//     scanf("%d", &prefeito1.idade);
//     printf("Digite o sexo do prefeito: ");
//     scanf(" %[^\n]s", prefeito1.sexo);

//     // Exibindo os dados
//     printf("\nInformações da Cidade:\n");
//     printf("Nome: %s\n", cidade1.nome);
//     printf("Número de Habitantes: %d\n", cidade1.nHabitantes);
//     printf("Prefeito: %s\n", cidade1.prefeito);

//     printf("\nInformações do Prefeito:\n");
//     printf("Nome: %s\n", prefeito1.nome);
//     printf("Idade: %d\n", prefeito1.idade);
//     printf("Sexo: %s\n", prefeito1.sexo);

//     return 0;
// }

// 3

typedef struct funcionario {
    char nome[50];
    int anosEmpresa;
    float salarios[12];
    float bonusFinal;
} funcionario;

void calcularBonus(funcionario *func, int qtd) {
    for (int i = 0; i < qtd; i++) {
        float somaSalarios = 0;
        for (int j = 0; j < 12; j++) {
            somaSalarios += func[i].salarios[j];
        }

        float mediaSalarial = somaSalarios / 12;
        if (func[i].anosEmpresa >= 10 && mediaSalarial < 50000) {
            func[i].bonusFinal = mediaSalarial * 1.2;
        } else {
            func[i].bonusFinal = mediaSalarial; 
        }
    }
}

void exibirBonus(funcionario *func, int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("\nFuncionário: %s\n", func[i].nome);
        printf("Anos de empresa: %d\n", func[i].anosEmpresa);
        printf("Bônus Final: %.2f\n", func[i].bonusFinal);
    }
}

int main() {
    int qtdFuncionarios;
    printf("Digite a quantidade de funcionários: ");
    scanf("%d", &qtdFuncionarios);

    funcionario *funcionarios = malloc(qtdFuncionarios * sizeof(funcionario));

    for (int i = 0; i < qtdFuncionarios; i++) {
        printf("\nDigite o nome do funcionário %d: ", i + 1);
        scanf(" %[^\n]s", funcionarios[i].nome);
        printf("Digite os anos de empresa: ");
        scanf("%d", &funcionarios[i].anosEmpresa);

        printf("Digite os salários mensais (12 valores):\n");
        for (int j = 0; j < 12; j++) {
            scanf("%f", &funcionarios[i].salarios[j]);
        }
    }

    calcularBonus(funcionarios, qtdFuncionarios);
    exibirBonus(funcionarios, qtdFuncionarios);

    free(funcionarios);
    return 0;
}
