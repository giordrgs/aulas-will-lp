#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int total = 0, passou = 0;
    float nota = 0,  soma = 0;
    printf("Digite a nota do aluno ou -1 para sair: ");
    scanf("%f", &nota);
    while (nota != -1){
        soma = soma + nota;
        total++;
        if (nota >= 7){
            passou++;
        }
        printf("Digite a nota do aluno ou -1 para sair: ");
        scanf("%f", &nota);
    }
    printf("O total de alunos é: %d\nA média da turma é de %.2f\nAlunos que tiraram mais que 7: %d", total, soma / total, passou);

    return 0;
}