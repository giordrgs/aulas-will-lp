#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int opc = 1;
    while(opc != 0){
        printf("Digite uma opção: ");
        scanf("%d", &opc);
        if(opc == 0){
            opc = 0;
        }
    }

    return 0;
}