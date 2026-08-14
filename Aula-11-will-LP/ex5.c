#include <stdio.h>
#include <stdlib.h>

int main(){
    int vel;
    printf("Digite a velocidade do carro: ");
    scanf("%d", &vel);
    if(vel <= 80){
        printf("Velocidade permitida\n");
    }
    else if(vel > 80 && vel <= 100){
        printf("Multa leve\n");
    }
    else{
        printf("Multa gravíssima\n");
    }
    system("pause");
    
    return 0;
}