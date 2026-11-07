#include <stdio.h>

int pole_pr(int x, int y){
    return x*y;
}

int main(){
    int a,b;
    
    printf("podaj a: \n");
    scanf("%d",&a);
    printf("podaj b: \n");
    scanf("%d", &b);

    printf("pole prostokata o bokach %d, %d rowna sie %d", a,b,pole_pr(a,b));

    return 0;
}