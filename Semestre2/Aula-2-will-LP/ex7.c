#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n, prod = 1, i = 1;
    printf("Digite um número: ");
    scanf("%d", &n);
    while(i <= n){
        prod = prod * i;
        i++;
    }
    printf("O produtório de 1 até %d é %d", n, prod);

    return 0;
}