#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 1;
    while(i <= 10){
        printf("%d\n", i);
        i++;
    }

    return 0;
}