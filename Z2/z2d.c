#include <stdio.h>

int main() {
    int i=0, x=0, suma=0;

    printf("Program policzy 1+2+...+x \n Podaj liczbe x: \n");
    scanf("%d", &x);

    do{
        suma += i;
        i++;
    } while (i <= x);

    printf("Suma = %d", suma);

    return 0;
}