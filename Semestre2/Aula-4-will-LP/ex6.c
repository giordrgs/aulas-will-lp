#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void pausar (int segundos){
    clock_t inicio = clock();
    while ((clock() - inicio) / CLOCKS_PER_SEC < segundos);
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i;
    do{
        printf("Digite a senha: ");
        scanf("%d", &i);

        pausar(1);

        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
    }while(i != 1234);
    printf("Senha correta, parabéns");

    printf("\n\nDigite ENTER para sair...");
    getchar();
    getchar();

    return 0;
}