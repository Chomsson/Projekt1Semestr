#include <stdio.h>

int main() {
    int i = 1, x = 0, pow = 1;

    printf("program policzy silnie z liczby x podanej przez uzytkownika: \n");
    scanf("%d", &x);

    while(i <= x) {
        pow *= i;
        i++;
    };

    printf("Silnia z %d to = %d", x, pow);

    return 0;
}