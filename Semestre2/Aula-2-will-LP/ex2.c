#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num, soma = 0, i = 1;
    while (i <= 5){
        printf("Digite um número: ");
        scanf("%d", &num);
        soma = soma + num;
        i++;
    }
    printf("A soma dos 5 números digitados é de: %d", soma);

    return 0;
}