#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num, i = 1;
    float soma = 0;
    while (i <= 5){
        printf("Digite um número: ");
        scanf("%d", &num);
        soma = soma + num;
        i++;
    }
    printf("A soma dos 5 números digitados é de: %.0f", soma);
    printf("\nA média dos números digitados é de %.2f", soma / 5);

    return 0;
}