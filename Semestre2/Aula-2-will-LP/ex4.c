#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int nota = 0, i = 0, total = 0;
    while (nota != -1){
        printf("Digite sua nota: ");
        scanf("%d", &nota);
        if (nota >= 0){
            total = total + nota;
            i++;
        }
    }
    printf("Notas válidas: %d\nTotal da soma das notas: %d", i, total);

    return 0;
}