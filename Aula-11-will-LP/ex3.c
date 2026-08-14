#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if(idade < 13){
        printf("Criança\n");
    }
    else if(idade >= 13 && idade <= 17){
        printf("Adolescente\n");
    }
    else if(idade >= 18 && idade <= 59){
        printf("Adulto\n");
    }
    else{
        printf("Idoso\n");
    }
    system("pause");
    
    return 0;
}