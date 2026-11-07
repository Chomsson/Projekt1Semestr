#include <stdio.h>
#include <string.h>

int highest_int(int x, int y, int z){
    int bufor = x>y? x : y;    
    int max = bufor>z? bufor : z;

    return max;
}

double highest_double(double x, double y, double z) {
    double bufor = x > y ? x : y;
    double max = bufor > z ? bufor : z;

    return max;
}

float highest_float(float x, float y, float z) {
    float bufor = x > y ? x : y;
    float max = bufor > z ? bufor : z;

    return max;
}

int main(){
    char operation[16];
    
    printf("wybierz operacje int/double/float: \n");
    fgets(operation, sizeof(operation), stdin);

    operation[strcspn(operation, "\n")] = '\0';

    if(strcmp(operation, "int") == 0){

        int a,b,c;

        printf("podaj a: \n");
        scanf("%d", &a);
        printf("podaj b: \n");
        scanf("%d", &b);
        printf("podaj c: \n");
        scanf("%d", &c);

        printf("najwieksza to: %d", highest_int(a,b,c));
    
    } else if(strcmp(operation, "double") == 0) {

        double a,b,c;

        printf("podaj a: \n");
        scanf("%lf", &a);
        printf("podaj b: \n");
        scanf("%lf", &b);
        printf("podaj c: \n");
        scanf("%lf", &c);
    
        printf("najwieksza double to: %3.2f", highest_double(a,b,c));
    } else if(strcmp(operation, "float") == 0) {
        
        float a,b,c;

        printf("podaj a: \n");
        scanf("%f", &a);
        printf("podaj b: \n");
        scanf("%f", &b);
        printf("podaj c: \n");
        scanf("%f", &c);
    
        printf("najwieksza float to: %3.2f", highest_float(a,b,c));
    } else {
        printf("wybrana zla operacja");
    }

    return 0;
}