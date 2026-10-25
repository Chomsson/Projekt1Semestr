#include <stdio.h>

int main() {
    int a, b;
    printf("Program policzy pole prostokata o podanych bokach a i b. \n \n");
    
    printf("Podaj dlugosc boku a: \n");
    scanf("%d", &a);

    printf("Podaj dlugosc boku b: \n");
    scanf("%d", &b);

    //int pole = a * b;

    printf("\nPole prostokata o dlugosciach bokow %d, %d rowna sie: %d", a,b, (a*b));

    return 0;
}