#include <stdio.h>

int main() {
    int a,b,c,bufor,max;

    printf("Program wybierze najwieksza liczbe z trzech podanych \n\n");
    
    printf("Podaj liczbe a: ");
    scanf("%d", &a);

    printf("Podaj liczbe b: ");
    scanf("%d", &b);

    printf("Podaj liczbe c: ");
    scanf("%d", &c);

    bufor = a>b ? a : b;
    max = bufor>c ? bufor : c;

    printf("\nNajwieksza liczba z podanych: %d, %d, %d   to: %d", a,b,c,max);

    return 0;
}