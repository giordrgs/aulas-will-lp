#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float sal;
    printf("Digite seu salário: ");
    scanf("%f", &sal);
    if(sal <= 2000){
        printf("Salário Bruto: %.2f | Valor Descontado: %.2f | Salário Líquido: %.2f\n", sal, sal, sal);
    }
    else if(sal > 2000 && sal <=5000){
        printf("Salário Bruto: %.2f | Valor Descontado: %.2f | Salário Líquido: %.2f\n", sal, sal*0.1, sal*0.9);
    }
    else{
        printf("Salário Bruto: %.2f | Valor Descontado: %.2f | Salário Líquido: %.2f\n", sal, sal*0.2, sal*0.8);
    }

    system("pause");
    
    return 0;
}