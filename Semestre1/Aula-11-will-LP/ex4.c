#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2;
    int selecao;
    printf("Digite dois números para fazer uma conta:\n");
    scanf("%f%f", &n1, &n2);
    printf("Qual operação deseja fazer?\n1. Somar | 2. Subtrair | 3. Multiplicar | 4. Dividir\n");
    scanf("%d", &selecao);
    if(selecao == 1){
        printf("%f\n", n1 + n2);
    }
    else if (selecao == 2){
        printf("%f\n", n1 - n2);
    }
    else if(selecao == 3){
        printf("%f\n", n1 * n2);
    }
    else if(selecao == 4){
        if(n2 != 0){
            printf("%f\n", n1 / n2);
        }
        else{
            printf("Não é possível dividir por 0\n");
        }
    }
    else{
        printf("Número de seleção errado\n");
    }
    system("pause");
    
    return 0;
}