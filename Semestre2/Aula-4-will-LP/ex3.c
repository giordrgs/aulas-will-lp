#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 1, soma = 0;
    while(i<=100){
        soma = soma + i;
        i++;
    }
    printf("%d", soma);

    return 0;
}