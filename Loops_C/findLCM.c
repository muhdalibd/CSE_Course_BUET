#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);

    int original1 = num1, original2 = num2;
    while(num2 != 0){
        int temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }
    int gcd = num1;
    printf("GCD is %d\n", gcd);
    int lcm = (original1*original2)/gcd;
    printf("LCM is %d\n", lcm);
    return 0;
}