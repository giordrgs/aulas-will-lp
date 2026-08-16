#include <stdio.h>
#include <stdlib.h>

int main(){
    float preco;
    printf("Escreva o preço de um produto: ");
    scanf("%f", &preco);
    printf("O valor a pagar é R$%.2f\n", preco);
    system("pause");
    
    return 0;
}