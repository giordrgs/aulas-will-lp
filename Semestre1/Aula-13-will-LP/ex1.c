#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int a = (rand() % 2);
    printf("--- Cara ou Coroa ---\n");
    if(a == 0){
        printf("Cara!");
    }
    else{
        printf("Coroa!");
    }


    return 0;
}