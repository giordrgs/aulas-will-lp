#include <stdio.h>
#include <stdlib.h>

int main(){
    int senha_dig, senha = 1278;
    printf("Digite sua senha: ");
    scanf("%d", &senha_dig);
    if(senha_dig == senha){
        printf("Acesso liberado!\n");
    }
    else{
        printf("Acesso negado\n");
    }
    system("pause");
    
    return 0;
}