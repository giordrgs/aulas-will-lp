#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota;
    printf("Digite a sua nota final: ");
    scanf("%f", &nota);
    if(nota >= 6.0){
        printf("Parabéns você passou, boas férias!\n");
    }
    else{
        printf("Você deve estudar mais pois ficou de recuperação\n");
    }
    system("pause");
    
    return 0;
}