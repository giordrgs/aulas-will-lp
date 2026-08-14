#include <stdio.h>
#include <stdlib.h>

int main(){
    float p1, p2;
    printf("Digite dois preços de produtos:\n");
    scanf("%f", &p1);
    scanf("%f", &p2);
    printf("É mais barato se 1, se não é 0: %d\n", p1<p2);
    system("pause");
    
    return 0;
}