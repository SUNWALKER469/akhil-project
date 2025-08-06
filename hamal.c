//WAP to print the average of 3 numbers
#include<stdio.h>

int main()
{
    float num1, num2, num3, average;

    printf("Akhil Hamal\n");

    // Taking inputs
    printf("Enter first number:\n");
    scanf("%f", &num1);

    printf("Enter second number:\n");
    scanf("%f", &num2);

    printf("Enter third number:\n");
    scanf("%f", &num3);

    // Calculating average
    average = (num1 + num2 + num3) / 3;

    
    printf("The average is: %.2f\n", average); // Display result with 2 decimal places

    return 0;
}
