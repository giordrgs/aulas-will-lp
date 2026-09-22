#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 1, par = 0;
    while(i<=50){
        if(i % 2 == 0){
            par++;
        }
        i++;
    }
    printf("%d", par);

    return 0;
}