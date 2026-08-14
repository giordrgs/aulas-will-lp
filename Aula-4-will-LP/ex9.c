#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome;
    int idade;
    float altura;
    printf("Digite a primeira letra de seu nome: ");
    scanf(" %c", &nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Atleta %c, idade de %d anos, altura de %.2fm\n", nome, idade, altura);
    system("pause");
    
    return 0;
}