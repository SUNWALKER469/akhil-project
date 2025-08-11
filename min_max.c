//program that finds min and max among 10 integer values in an array.
#include <stdio.h>

int main() {
    int arr[10];
    int i, max, min;

    // Input 10 numbers
    printf("Enter 10 integer values:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min to the first element
    max = min = arr[0];

    // Find max and min
    for(i = 1; i < 10; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    // Output results
    printf("Maximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    return 0;
}
