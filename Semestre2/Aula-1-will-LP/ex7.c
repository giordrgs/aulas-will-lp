#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 1, notas;
    float nota_dig, media = 0, val;
    printf("Digite a quantidade de notas a ser digitada: ");
    scanf("%d", &notas);
    while (i <= notas){
        printf("Digite a nota: ");
        scanf("%f", &nota_dig);
        media = media + nota_dig;
        i++;
    }
    val = media / notas;
    printf("A média das notas digitadas é de %.2f", val);

    return 0;
}