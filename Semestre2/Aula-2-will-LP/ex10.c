#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vog = 0;
    char palavra[30];
    char *letra = palavra;
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    while (*letra != '\0'){
        if (*letra == 'A' || *letra == 'E' || *letra == 'I' || *letra == 'O' || *letra == 'U' || *letra == 'a' || *letra == 'e' || *letra == 'i' || *letra == 'o' || *letra == 'u'){
            vog++;
        }
        letra++;
    }
    printf ("A palavra %s tem %d vogais", palavra, vog);

    return 0;
}