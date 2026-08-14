#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int opt;
    printf("---Cantina---\n");
    printf("Digite o código do que deseja:\n1|Coxinha \n2|Pastel \n3|Pão de queijo\n");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Você escolheu Coxinha: R$5,00");
            break;
        case 2:
            printf("Você escolheu Pastel: R$4,00");
            break;
        case 3:
            printf("Você escolheu Pão de Queijo: R$3,50");
            break;
        default:
            printf("Opção inexistente");
            break;
    }

    return 0;
}
