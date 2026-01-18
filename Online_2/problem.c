#include <stdio.h>

int main(){
    /*
        Write a C program that takes a non-negative integer number N as input,
        forms and prints the following sequence, and
        finally finds out the sum of the series up to N terms.
        1 + 12 + 123 + 1234 + …….
    */
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int num = 0;
    for(int i=1; i<=n; i++){    // printing the number
        num = num * 10 + i;
        if(i == n){
            printf("%d ", num);
            break;
        }
        printf("%d + ", num);
    }

    int sum = 0, x = 0;
    for(int i=1; i<=n; i++){    // printing thr sum
        x = x * 10 + i;
        sum += x;
    }
    printf("= %d", sum);
    
    return 0;
}