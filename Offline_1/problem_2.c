#include <stdio.h>

int main(){
    // Take a number and print a pattern.
    /*
    # If n = 4 ==>
        0 
        10 
        010 
        1010 
    # If n = 5 ==>
        1 
        01 
        101 
        0101 
        10101 
    */

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // int num = 1;
    // if(n % 2 == 0){
    //     num = 0;
    // }

    for(int i=0; i<n; i++){
        // if(n%2 == 0 && i % 2 !=0){
        //     num = 1;
        // }
        // else if(n%2 != 0 && i % 2 ==0){
        //     num = 0;
        // }

        for(int j=0; j<=i; j++){
            printf("%d", (n+i+j)%2);
            // num = 1 - num;
        }
        printf("\n");
    }
    
    return 0;
}