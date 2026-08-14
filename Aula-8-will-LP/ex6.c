#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Se você tiver mais ou igual a 18 é 1, se não é 0: %d\n", idade >= 18);
    system("pause");
    
    return 0;
}