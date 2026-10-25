#include <stdio.h>

int main(){
    int x=0, i=0, suma=0;

    printf("Program policzy 1+2+...+x \n Podaj liczbe x: \n");
    scanf("%d", &x);

    while(i <= x) {
        suma += i;
        i++;
    };

    printf("Suma = %d", suma);

    return 0;
}