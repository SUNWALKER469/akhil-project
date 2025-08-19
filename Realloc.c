//Use of Realloc()
#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Akhil Hamal\n");
    int *arr = (int*) malloc(3 * sizeof(int)); // initial 3 elements

    for (int i = 0; i < 3; i++)
        arr[i] = i + 1; // 1,2,3

    arr = (int*) realloc(arr, 5 * sizeof(int)); // resize to 5 elements
    arr[3] = 4;
    arr[4] = 5;

    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
