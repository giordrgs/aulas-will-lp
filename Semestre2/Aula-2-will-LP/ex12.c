#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int lidos = 0;
    float soma = 0, num;
    printf("Digite um número: ");
    scanf("%f", &num);
    while (num != -1){
        soma = soma + num;
        lidos++;
        printf("Digite um número: ");
        scanf("%f", &num);
    }
    printf("A soma dos números é de: %.2f\nA quantidade de números lidos é de: %d\nA média dos números é de: %.2f", soma, lidos, soma / lidos);

    return 0;
}