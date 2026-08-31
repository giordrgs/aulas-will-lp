#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int comp = 0;
    float val, total = 0;
    printf("Digite o preço do produto: ");
    scanf("%f", &val);
    while(val != 0){
        total = total + val;
        comp++;
        printf("Digite o preço do produto: ");
        scanf("%f", &val);
    }
    printf ("O total de itens comprados é de: %d\nO valor total da compra é de: %.2f", comp, total);

    return 0;
}