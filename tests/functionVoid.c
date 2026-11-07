#include <stdio.h>

void pole_pr(int x, int y) {
    int c = x * y;
    printf("Pole prostokata o bokach %d, %d wynosi: %d", x,y,c);
};

int main(){
    int a, b;

    printf("podaj a: \n");
    scanf("%d", &a);

    printf("podaj b: \n");
    scanf("%d", &b);

    pole_pr(a,b);

    return 0;
}
