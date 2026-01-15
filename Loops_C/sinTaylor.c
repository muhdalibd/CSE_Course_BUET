#include <stdio.h>

int main(){
    double angle;
    printf("Enter a angle: ");
    scanf("%lf", &angle);
    angle = (3.1416/180)*angle;

    double terms;
    printf("Enter terms: ");
    scanf("%lf", &terms);

    double value = 0;
    for(int i=1; i<=terms; i++){
        double value1 = 1, value2 = 1;
        // Power
        for(int j=1; j<=(2*i-1); j++){
            value2 *= angle;
        }
        // Power (Sign)
        if(i % 2 == 0){
            value2 *= -1;
        }
        // Factorial
        for(int k=1; k<=(2*i-1); k++){
            value1 *= k;
        }

        value = (value2 / value1) + value;
    }

    printf("%lf", value);
    return 0;
}