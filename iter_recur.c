//WAP that implements factorial of a number using a recursive and iterative function
#include <stdio.h>

// Recursive function for factorial
unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

// Iterative function for factorial
unsigned long long factorial_iterative(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d (Recursive) = %llu\n", n, factorial_recursive(n));
        printf("Factorial of %d (Iterative) = %llu\n", n, factorial_iterative(n));
    }

    return 0;
}
