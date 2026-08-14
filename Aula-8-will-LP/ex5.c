#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2;
    printf("Digite dois números:\n");
    scanf("%d%d", &n1, &n2);
    printf("Os números são iguais se 1 e diferentes se 0: %d\n", n1 == n2);
    system("pause");
    
    return 0;
}