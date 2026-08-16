#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int val = (rand() % 20) + 1;
    printf("--- Simulador de dado D20 ---\n");
    switch(val){
        case 1:
            printf("ERRO CRÍTICO! Você acertou a si mesmo!");
            break;
        case 20:
            printf("ACERTO CRÍTICO! Dano Máximo!");
            break;
        default:
            printf("Você acertou o ataque com força %d", val);
            break;   
    }

    return 0;
}