#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, media;

    // 1. ENTRADA DE DADOS
    printf("--- Calculadora de Media ---\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    // 2. PROCESSAMENTO (Com parênteses corretos!)
    media = (n1 + n2) / 2.0;

    // 3. SAÍDA DE DADOS
    printf("\nA media do aluno e: %.2f\n", media);

    system("pause");

    return 0;
}