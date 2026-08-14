#include <stdio.h>
#include <stdlib.h>

int main(){
    int total, sem, dias;
    printf("Escreva uma quantidade de dias: ");
    scanf("%d", &total);
    sem = total/7;
    dias = total%7;
    printf("Isoo equivale a %d semanas e %d dias\n", sem, dias);
    system("pause");
    
    return 0;
}