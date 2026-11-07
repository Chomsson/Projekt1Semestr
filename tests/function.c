#include <stdio.h>

int pole_pr(int a, int b) {
    return a*b;
}

int main(){
    int a,b,c;

    printf("podaj a: \n");
    scanf("%d", &a);

    printf("podaj b: \n");
    scanf("%d", &b);
     
    printf("pole prostokąta o podanych wymiarach %d %d, wynosi %d", a, b, pole_pr(a,b));

    return 0;
}