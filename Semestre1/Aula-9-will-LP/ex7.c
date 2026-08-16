#include <stdio.h>
#include <stdlib.h>

int main(){
    int ingresso;
    char nome;
    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &nome);
    printf("Digite o número do seu ingresso: ");
    scanf("%d", &ingresso);
    if(nome == 'W' || ingresso == 1){
        printf("Você tem acesso VIP\n");
    }
    else{
        printf("Você tem acesso normal\n");
    }
    system("pause");
    
    return 0;
}