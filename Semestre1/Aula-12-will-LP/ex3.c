#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\nEssa letra é uma vogal\n");
            break;
        default:
            printf("\n Essa letra é uma consoante\n");
            break;    
    }

    return 0;
}