#include <stdio.h>
#include <stdlib.h>

int main(){
    int vidas = 3, pontos = 1500;
    if(pontos >= 1000 && vidas >0){
        printf("Você passou de fase!\n");
    }
    else{
        printf("Ainda está na mesma fase\n");
    }
    system("pause");
    
    return 0;
}