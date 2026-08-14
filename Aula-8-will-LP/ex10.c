#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("Se 1 é par, se 0 é ímpar: %d\n", (num%2)==0);

    system("pause");
    return 0;
}