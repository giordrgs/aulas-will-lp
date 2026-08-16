#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2;
    printf("Digite dois diferentes:\n");
    scanf("%d%d", &n1, &n2);
    if(n1>n2){
        printf("O número %d é maior que %d\n", n1, n2);
    }
    else if(n2>n1){
        printf("O número %d é maior que %d\n", n2, n1);
    }
    else{
        printf("Eu pedi números diferentes o idiota, esses são iguais\n");
    }
    system("pause");
    
    return 0;
}