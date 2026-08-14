#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso, altura, imc;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    printf("Seu IMC é de %.2f\n", imc);
    system("pause");
    
    return 0;
}