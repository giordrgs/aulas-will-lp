#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void pausar(int segundos) {
    clock_t inicio = clock();
    while ((clock() - inicio) / CLOCKS_PER_SEC < segundos);
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 5;
    while(i <= 100){
        printf("%d\n", i);
        i+=5;

        pausar(2);

        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
    }

    return 0;
}