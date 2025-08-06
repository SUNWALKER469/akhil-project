//Matrix Multiplication
#include<stdio.h>
#include<math.h>

int main()
{
    int a[3][3], b[3][3], mul[3][3];
    int rows1, cols1, rows2, cols2;
    
    printf("Akhil Hamal\n");
    
    // Input size of first matrix
    printf("Enter rows and cols of first matrix:");
    scanf("%d%d", &rows1, &cols1);
    
    // Input size of second matrix
    printf("Enter rows and cols of second matrix:");
    scanf("%d%d", &rows2, &cols2);
    
    //check if multiplication is possible or not
    if(cols1 != rows2)
	 {
    	printf("Matrix Multiplication not possible! column of first matrix must be equal to rows of second\n");
    	return 1;
	}
    
    //Input first matrix
    printf("Enter the elements of first matrix:\n");
    for(int i = 0; i<rows1; i++)
    {
        for(int j = 0; j<cols1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    //Input second matrix
    printf("Enter the elements of second matrix:\n");
    for(int i = 0; i<rows2; i++)
    {
        for(int j = 0; j<cols2; j++){
        
            scanf("%d", &b[i][j]);
        }
    }
    
    
    // Matrix multiplication
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<cols2; j++)
        {
            mul[i][j] = 0; // Initialize to 0
            for(int k = 0; k<cols2; k++)
            {
                mul[i][j] += a[i][k] * b[k][j]; // Dot product
            }
        }  
    }
    
    // Display result
    printf("The product of two matrices is:\n");
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<cols2; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}