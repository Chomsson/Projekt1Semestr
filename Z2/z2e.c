#include <stdio.h>

int main() {
    int x = 0, suma_np = 0, suma_p = 0;

    printf("Program policzy sume liczb parzystych i nieparzystych z wybranego zakresu \n Podaj zakres x: \n");
    scanf("%d", &x);

    for(int i = 1; i<=x; i++) {
        if(i%2 == 0) {
            suma_p += i;
        } else {
            suma_np += i;
        }; 
    };

    printf("Suma parzystych = %d \n", suma_p);
    printf("Suma nieparzystych = %d", suma_np);

    return 0;
}