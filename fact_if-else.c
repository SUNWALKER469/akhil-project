//WAP to print the factorial of a number n using if-else
#include <stdio.h>

int main() {
    int n, i;
    int fact = 1; //taking 1 instead of 0 makes the factorial non-negative

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else if (n == 0) {
        printf("Factorial of 0 is 1.\n");
    } 
    else {
        for (i = 1; i <= n; i++) {
            fact =fact * i;
        }
        printf("Factorial is:%d", fact);
    }

    return 0;
}
