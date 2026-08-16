#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 0;
    while(i < 5){
        printf("%d", i);
        i++;
    }

    return 0;
}