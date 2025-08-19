//WAP to check if a file exists before reading from it.
#include <stdio.h>

int main() {
	printf("Akhil Hamal\n");
    FILE *fptr = fopen("New Test.txt", "r");

    if (fptr == NULL)
        printf("File doesn't exist\n");
    else {
        printf("File exists\n");
        fclose(fptr);
    }

    return 0;
}
