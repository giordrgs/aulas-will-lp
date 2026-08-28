#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num, div = 2,  i = 0;
    int resto = 0;
    printf("Digite um número maior do que 1: ");
    scanf("%d", &num);
    while (div < num){
        resto = num % div;
        if (resto == 0){
            i++;
        }
        div++;
    }
    if(i == 0){
        printf("O número %d é primo", num);
    }
    else{
        printf("O número %d não é primo", num);
    }

    return 0;
}