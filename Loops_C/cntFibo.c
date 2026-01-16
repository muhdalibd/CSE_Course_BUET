#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Number of Fibonacci numbers up to %d: 0\n", n);
        return 0;
    }

    int count = 0;
    int a = 0, b = 1;
    
    printf("Fibonacci numbers up to %d: ", n);
    
    // Using for loop with initialization
    for (int i = 0; ; i++) {
        if (i == 0) {
            // First Fibonacci number
            if (a <= n) {
                printf("%d ", a);
                count++;
            } else {
                break;
            }
        } else {
            int next = a + b;
            if (next <= n) {
                printf("%d ", next);
                count++;
                a = b;
                b = next;
            } else {
                break;
            }
        }
    }
    
    printf("\nNumber of Fibonacci numbers up to %d: %d\n", n, count);
    return 0;
}