#include <stdio.h>
#include <stdlib.h>

int main(){
    float media, n1, n2;
    printf("Digite a primeira nota em seguida da segunda nota:\n");
    scanf("%f%f", &n1, &n2);
    media = (n1*2+n2*3)/5;
    printf("Sua média é de %.2f\n", media);
    system("pause");
    
    return 0;
}