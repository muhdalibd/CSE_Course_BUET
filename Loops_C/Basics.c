/*
# • Loops in C Programming
=> Three types of LOOPS
    for loop, while loop, do..while loop

# • When to USE 
==> for loop = Number of iterations is known in advance (e.g., iterating through an array).
    Condition check: Before each iteration.
==> while loop = Number of iterations is unknown and dependent on a dynamic condition.
	Condition check: Before each iteration (entry-controlled).
==> do.. while loop = Loop must execute at least once before the condition is checked
    (e.g., menu prompt).
	Condition check: After each iteration (exit-controlled).
*/

#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int askPositive(){
    // • program that continuously asks for positive number as input:
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    
    while(n <= 0){
        printf("Please, enter a positive number: ");
        scanf("%d", &n);
    }
    
    printf("Your entered number is: %d", n);
    return 0;
}

void printSky(){
    // • Print “The sky is the limit!” n times. n will be user input:
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // • Choosing for loop will be easier

    // for(int i=0; i<n; i++){
    //     printf("The sky is the limit!\n");
    // }

    // • Choosing while loop
    int i = 0;
    while(i < n){
        printf("The sky is the limit!\n");
        i++;
    }
    return;
}

void printNum(){
    // • Print first n natural numbers.
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    //  Upwards

    // for(int i=1; i<=n; i++){
    //     printf("%d\n", i);
    // }

    //  Downwards

    while(n > 0){
        printf("%d\n", n);
        n--;
    }
    return;
}

void printOdd(){
    // • Print odd numbers up to n.
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i+=2){
        printf("%d\n", i);
    }
    return;
}

void printEven(){
    // • Print even numbers up to n.
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=2; i<=n; i+=2){
        printf("%d\n", i);
    }
    return;
}

int printSum(){
    // • Print summation of first n numbers.
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

int printOddSum(){
    // • Print summation of all odd numbers up to n.
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1; i<=n; i+=2){
        sum += i;
    }
    return sum;
}

int printEvenSum(){
    // • Print summation of all even numbers up to n.
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=2; i<=n; i+=2){
        sum += i;
    }
    return sum;
}


#define PI 3.14159265358979323846

double sinTaylor(){
    double angle;
    printf("Enter angles: ");
    scanf("%lf", &angle);
    double x = (M_PI/180) * angle;

    double terms;
    printf("Enter terms: ");
    scanf("%lf", &terms);

    double value = 0.0;

    for(double i=1; i<=terms; i++){
        double value1 = 1.0;
        double value2 = 1.0;
        // Factorial
        for(double j=1; j<=(2*i-1); j++){
            value1 *= j;
        }
        // Power (Sign)
        if(fmod(i, 2.0) == 0.0){
        value2 = - pow(x,(2*i-1));
        } else{
        value2 = + pow(x,(2*i-1));
        }
        
        value = value + (value2 / value1);
    }
    return value;
}


double cosTaylor(){
    double angle;
    printf("Enter angle: ");
    scanf("%lf", &angle);
    double x = angle * (M_PI/180);

    double terms;
    printf("Enter terms: ");
    scanf("%lf", &terms);

    double value = 0.0;
    for(double i=1; i<=terms; i++){
        double value1 = 1.0;
        double value2 = 1.0;
        // Factorial
        for(int j=1; j<=(2*i-2); j++){
            value1 *= j;
        }
        // Power (Sign)
        if(fmod(i,2.0) == 0){
            value2 = - pow(x, (2*i-2));
        } else{
            value2 = + pow(x, (2*i-2));
        }
        value = value + (value2 / value1);
    }

    return value;
}


double tanTaylor(){
    
}

int main(){
    // askPositive();
    // printSky();
    // printNum();
    // printOdd();
    // printEven();

    // int sum = printSum();
    // printf("Summation is: %d", sum);

    // int oddSum = printOddSum();
    // printf("Summation is: %d", oddSum);

    // int evenSum = printEvenSum();
    // printf("Summation is: %d", evenSum);

    // double sinX = sinTaylor();
    // printf("%lf", sinX);

    double cosX = cosTaylor();
    printf("%lf", cosX);
    
    return 0;
}