#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int idade = 0;
    while(idade >= 120 || idade <= 0){
        printf("Digite sua idade: ");
        scanf("%d", &idade);
    }
    printf("Valeu");

    return 0;
}