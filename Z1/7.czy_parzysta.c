#include <stdio.h>

int main() {
    int a;

    printf("Podaj liczbe aby sprawdzic czy jest parzysta \n");
    scanf("%d", &a);

    (a == (a/2)*2) ? printf("Liczba jest parzysta") : printf("Liczba jest nieparzysta"); 

    return 0;
}