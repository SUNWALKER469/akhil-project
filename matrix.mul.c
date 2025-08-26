//matrix multiplication
#include<stdio.h>

int main()
{
	int a[10][10], b[10][10], mul[10][10]; //a[10][10] stores 10 integers
	int rows1, cols1, rows2, cols2;
	
	//Input size of first matrix
	printf("Enter rows and columns of first matrix:");
	scanf("%d%d", &rows1, &cols1);
	
	//Input size of second matrix
	printf("Enter rows and columns of second matrix:");
	scanf("%d%d", &rows2, &cols2);
	
	//checking if matrix multiplication is possible or not
	if(cols1!=rows2) {
		printf("Matrix multiplication is not possible!");//column of first matrix must be equal to rows of second to perform matrix calculation
		return 0;
	}
	
	//Input first matrix
	printf("Enter the elements of first matrix:\n");
	for(int i=0; i<rows1; i++) {
		for(int j=0; j<cols1; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	//Input second matrix
	printf("Enter the elements of second matrix:");
	for(int i=0; i<rows2; i++) {
		for(int j=0; j<cols2; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	
	//multiply the matrices
 	for(int i=0; i<rows1; i++) {
		for(int j=0; j<cols2; j++) {
				mul[i][j] = 0;
			for(int k=0; k<cols2; k++) {
				mul[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
	//printing the result 
	printf("The matrix multiplication is:\n");
	for(int i=0; i<rows1; i++) {
		for(int j=0; j<cols2; j++) {
			printf("%d\t", mul[i][j]);
		}
		printf("\n");
	}
	
	return 0;
	
}