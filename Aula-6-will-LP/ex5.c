#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, n1, n2;
    printf("Digite um número de dois dígitos: ");
    scanf("%d", &num);
    n1 = num/10;
    n2 = num%10;
    printf("O inverso desse número é %d%d\n", n2, n1);
    system("pause");
    
    return 0;
}