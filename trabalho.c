#include <stdio.h>

int main(){
    int vezes;
    int rep = 0;

    printf("Quantas vezes você quer repetir a palavra 'Hello Word!'? ");
    scanf("%d", &vezes);
    while(rep < vezes){
        printf("Hello Word!\n");
        rep++;
    }

    return 0;
}