#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18){
        printf("Você já é maior de idade. Pode ser preso!\n");
    }
    else{
        printf("Você ainda é menor de idade\n");
    }
    
    system("pause");
    
    return 0;
}