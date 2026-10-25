#include <stdio.h>

int main(){
    int x = 0;
    int suma = 0;

    printf("Program policzy: 1+2+3...+x \n");
    printf("Podaj liczbe x: \n");
    scanf("%d", &x);

    for(int i = 1; i<=x ; i++) {
        suma += i;
    }

    printf("suma = %d", suma);
    return 0;
}