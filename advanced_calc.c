#include <stdio.h>
#include <math.h>

int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    printf("Square root: %.2lf\n", sqrt(num));
    printf("Power (num^2): %.2lf\n", pow(num, 2));
    printf("Logarithm: %.2lf\n", log(num));
    printf("Sine: %.2lf\n", sin(num));

    return 0;
}
