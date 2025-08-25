//WAP to check whether the number n is prime or composite
#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    // 0 and 1 are neither prime nor composite
    if (n == 0 || n == 1) {
        printf("%d is neither prime nor composite.\n", n);
        return 0;
    }

    // Check divisibility
    for (int i = 1; i<=n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2)
        printf("%d is Prime.\n", n);
    else
        printf("%d is Composite.\n", n);

    return 0;
}
