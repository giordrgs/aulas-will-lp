#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, soma;
    printf("--Calculadora de Soma--\n");
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);
    soma = n1 + n2;
    printf("A soma de %d e %d é %d\n", n1, n2, soma);
    system("pause");
    
    return 0;
}