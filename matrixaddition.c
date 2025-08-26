#include<stdio.h>

int main()
{
	int a[10][10], b[10][10], sum[10][10];
	int rows1, cols1, rows2, cols2;
	
	printf("Enter the rows and column of first matrix:");
	scanf("%d%d", &rows1, &cols1);
	
	printf("Enter the rows and column of second matrix:");
	scanf("%d%d", &rows2, &cols2);
	
	if(rows1!=rows2 || cols1!=cols2){
		printf("Matrxi addition not possible!");
		return 0;
	}
	
	printf("Enter the elements of first matrix:");
	for(int i=0; i<rows1; i++) {
		for(int j=0; j<cols1; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Enter the elements of second matrix:");
	for(int i=0; i<rows2; i++) {
		for(int j=0; j<cols2; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	
	//calculation
	for(int i=0; i<rows1; i++) {
		for(int j=0; j<cols1; j++) {
			sum[i][j] =  a[i][j] + b[i][j];
		}
	}
	
	//printing result
	printf("The matrix addition is:\n");
	for(int i=0; i<rows1; i++) {
		for(int j=0; j<cols1; j++) {
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
	
	
	
	
	
}