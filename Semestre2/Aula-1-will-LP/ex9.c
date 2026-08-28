#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char nick[30];
    char *letra = nick;
    int i = 0;
    printf("Digite seu nick: ");
    scanf("%s", nick);
    while(*letra != '\0'){
        i++;
        letra++;
    }
    printf("Seu nick tem %d caracteres", i);

    return 0;
}