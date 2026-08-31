#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int soma = 0, contador = 1;
    while (contador <= 5){
        soma = soma + contador;
        contador ++;
    }
    printf("A soma de 1 até 5 é de %d", soma);

    return 0;
}