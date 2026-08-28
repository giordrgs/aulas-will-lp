#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num, i;
    printf("Digite um número: ");
    scanf("%d", &num);
    i = num - 1;
    while(i > 1){
        num = num * i;
        i--;
    }
    printf("O fatorial do número é %d", num);

    return 0;
}