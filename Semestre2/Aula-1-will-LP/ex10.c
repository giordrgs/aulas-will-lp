#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char palavra [40], *a = palavra;
    int i;
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    while (*a != '\0'){
        if(*a == 'a' || *a == 'A'){
            i++;
        }
        a++;
    }
    printf("\nA quantidade de letras 'a' em sua palavra é de %d", i);

    return 0;
}