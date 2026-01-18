#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    if(a < b){
        int t = a;
        a = b;
        b = t;
    }
    while(b != 0){
        int n = a % b;
        a = b;
        b = n;
    }
    printf("%d ", a);
    return 0;
}