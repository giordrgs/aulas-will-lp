#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade, salario;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu salário mensal: ");
    scanf("%d", &salario);
    if(idade >= 18 && salario > 2000){
        printf("Empréstimo aprovado!\n");
    }
    else{
        printf("Empréstimo negado!\n");
    }
    system("pause");
    
    return 0;
}