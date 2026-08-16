#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num, i = 1;
    printf("Digite um número: ");
    scanf("%d", &num);
    while(i <= num){
        printf("%d\n", i);
        i++;
    }

    return 0;
}