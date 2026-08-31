#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cont = 0, soma = 0, valor = 0;
    while (cont < 5){
        scanf("%d", &valor);
        soma = soma + valor;
        cont++;
    }

    return 0;
}