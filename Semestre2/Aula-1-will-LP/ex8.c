#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 0, num;
    printf("Digite um número: ");
    scanf("%d", &num);
    while (num != 0){
        num = num / 10;
        i++;
    }
    printf("O número tem %d dígitos.", i);

    return 0;
}