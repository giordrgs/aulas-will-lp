#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 0, soma = 0, num;
    printf("Digite um número: ");
    scanf("%d", &num);
    while(i <= num){
        soma = soma + i;
        i++;
    }
    printf("O resultado da soma dos números de 1 até %d é de %d\n", num, soma);

    return 0;
}