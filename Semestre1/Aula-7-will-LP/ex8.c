#include <stdio.h>
#include <stdlib.h>

int main(){
    float preco;
    printf("Digite o preço de um produto: ");
    scanf("%f", &preco);
    if(preco > 100){
        printf("Você tem que pagar R$%.2f\n", preco*0.9);
    }
    else{
        printf("Você tem que pagar R$%.2f\n", preco);
    }
    system("pause");
    
    return 0;
}