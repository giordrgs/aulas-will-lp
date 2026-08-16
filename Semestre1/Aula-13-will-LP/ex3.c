#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int sist, user;
    sist = (rand() % 10) + 1;
    printf("--- Loteria ---\n");
    printf("Digite um número de 1 a 10: ");
    scanf("%d", &user);
    if(user == sist){
        printf("Parabéns! Você ganhou!");
    }
    else{
        printf("Que pena. O número sorteado foi %d", sist);
    }

    return 0;
}