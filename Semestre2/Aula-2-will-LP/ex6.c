#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num = 1, i = 0, pos = 0, neg = 0;
    while(num != 0){
        printf("Digite um número: ");
        scanf("%d", &num);
        if (num > 0){
            pos++;
        }
        else if (num < 0){
            neg++;
        }
    }
    printf("Números positivos: %d\nNúmeros Negativos: %d", pos, neg);

    return 0;
}