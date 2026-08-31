#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 1, mult = 0;
    while (i <= 30){
        if (i % 3 == 0){
            mult++;
        }
        i++;
    }
    printf("Os múltiplos de 3 de 1 até 30 são %d", mult);

    return 0;
}