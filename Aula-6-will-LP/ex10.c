#include <stdio.h>
#include <stdlib.h>

int main(){
    int total, n50, n20, n10;
    printf("Digite um valor em reais: ");
    scanf("%d", &total);
    n50 = total/50;
    n20 = (total-n50*50)/20;
    n10 = (total-n50*50-n20*20)/10;
    printf("Você deverá dar %d notas de R$50, %d notas de R$20 e %d notas de R$10\n", n50, n20, n10);
    
    system("pause");
    
    return 0;
}