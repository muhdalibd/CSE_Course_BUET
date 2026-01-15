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

void showFactor(){
    // • Show all factors of a number n
    // • Candidates 1, 2, 3, 4 .......... n
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(n % i == 0){
            printf("%d\n", i);
        }
    }
    return;
}


void showSmallestFactor(){
    /* • Show smallest factor of a number n (other than 1)
       • Candidates 1, 2, 3, 4 .......... n
       • Break on first candidate that becomes a factor
    */
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(i == 1){
            continue;
        }
        if(n % i == 0){
            printf("%d\n", i);
            break;
        }
    }
    return;
}


void showLargestFactor(){
    /* • Show largest factor of a number n (other than n)
       • Candidates 1, 2, 3, 4 .......... n
       • Break on first candidate that becomes a factor
    */
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=n; i>=1; i--){
        if(i == n){
            continue;
        }
        if(n % i == 0){
            printf("%d\n", i);
            break;
        }
    }
    return;
}

int showCountFactor(){
    /*  • Show how many factors of a number n has
        • Candidates 1, 2, 3, 4 .......... n
        • Increment a counter whenever you get a candidate
          which is a factor
    */

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 0;
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            count++;
        }
    }
    return count;
}

void isNumPrime01(){
    /*
        • Primality testing: determine whether a number n is prime or not
        • Candidates 1, 2, 3, 4 .......... n
        • Increment a counter whenever you get a candidate which is a factor
        • Prime numbers always have two factors.
    */
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 0;
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            count ++;
        }
    }

    if(count == 2) printf("%d is prime.", n);
    else printf("%d is not prime.", n);
    return;
}


void isNumPrime02(){
    /*
        • Primality testing: determine whether a number n is prime or not
        • Candidates 1, 2, 3, 4 .......... n
        • Increment a counter whenever you get a candidate which is a factor
        • Prime numbers always have two factors.
    */
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 0;
    // • Increase efficiency by going up to the square root
    for(int i=1; i*i<=n; i++){
        if(n % i == 0){     // i<=sqrt(n)
            count ++;
        }
    }

    if(count == 1 && n != 1) printf("%d is prime.", n);
    else printf("%d is not prime.", n);
    return;
}

void perfectNum(){
    /*
        • Perfect number testing: determine whether a number n is perfect or not
        • If a number can be made out of its factors
        • For example 6  1, 2, 3  1+ 2 +3 = 6
        • Another example 28  1,2,4,7,14  1+2+4+7+14
        • Candidates 1, 2, 3, 4 .......... n
        • Add to sum whenever you get a candidate which is a factor
    */

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i=1; i<n; i++){
        if(n % i == 0){
            sum += i;
        }
    }

    if(n == sum) printf("%d is perfect number.", n);
    else printf("%d is not perfect number.", n);
    return;
}

void gcdOfTwoNum01(){
    /*
        • GCD of two numbers (Normal way)
        • GCD(24,54) = 6
        • Factors of 24  1, 2, 3, 4, 6, 8, 12, 24
        • Factors of 54  1, 2, 3, 6, 9, 18, 27, 54
        • Common Factors 1, 2, 3, 6
        • Greatest Common Factor 6
    */

    int num1, num2;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);

    int gcd = 0;
    if(num1 == 0 || num2 == 0){
        gcd = num1 + num2;
    } else{
        int min = (num1 > num2) ? num2 : num1;
        for(int i=1; i<=min; i++){
            if(num1 % i == 0 && num2 % i == 0){
                gcd = i;
            }
        }
    }
    printf("%d", gcd);
}

void gcdOfTwoNum02(){
    // Using Modulo Operator (Euclidean Algorithm)
    int num1, num2;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);

    if(num1 < num2){
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    while(num2 != 0){
        int num = num1 % num2;
        num1 = num2;
        num2 = num;
    }
    printf("%d", num1);
}

void fibonacciSeries(){
    /*
    program that will print n-th Fibonacci number where n will be input to your program.
    */
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
    // double cosX = cosTaylor();
    // printf("%lf", cosX);
    // showFactor();
    // showSmallestFactor();
    // showLargestFactor();
    // int count = showCountFactor();
    // printf("%d", count);
    // isNumPrime01();
    // isNumPrime02();
    // perfectNum();
    // gcdOfTwoNum02();
    
    return 0;
}