#include <stdio.h>
#include <stdlib.h>

int main(){
    float F, C;
    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &F);
    C = (F-32)/1.8;
    printf("Essa temperatura em Celsius é de %.2f°C\n", C);
    system("pause");
    
    return 0;
}