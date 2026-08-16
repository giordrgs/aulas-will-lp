#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 2;
    while(i <= 10){
        printf("%d\n", i);
        i+=2;
    }

    return 0;
}