//matrix Transpose
#include<stdio.h>

int main()
{
	int a[10][10], transpose[10][10]; //a[10][10] stores 10 integers
	int rows, cols;
	
	//Input size of first matrix
	printf("Enter rows and columns of first matrix:");
	scanf("%d%d", &rows, &cols);
	
	
	//Input the matrix
	printf("Enter the elements of first matrix:\n");
	for(int i=0; i<rows; i++) {
		for(int j=0; j<cols; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	
   // Find transpose
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            transpose[j][i] = a[i][j];   // flip rows and cols
        }
    }
    
    // Print original matrix
    printf("\nOriginal Matrix:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    // Print transpose
    printf("\nTranspose of Matrix:\n");
    for(int i=0; i<cols; i++) {   // Notice loop order (cols first!)
        for(int j=0; j<rows; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}