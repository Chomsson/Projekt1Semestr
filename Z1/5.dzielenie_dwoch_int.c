#include <stdio.h>

int main() {
    int a,b;

    printf("Podaj dwie liczby: \n\n");
    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("wynik dzielenia bez reszty to: %d", a/b);

    return 0;
}