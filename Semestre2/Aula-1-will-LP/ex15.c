#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num, i;
    printf("Digite um número: ");
    scanf("%d", &num);
    while(num != 0){
        i = num % 10;
        printf("%d", i);
        num = num / 10;
    }

    return 0;
}