//Matrix Subtraction
#include<stdio.h>

int main()
{
    int a[3][3], b[3][3], sub[3][3] ;
    int rows, cols;
    
    printf("Akhil Hamal\n");
    
    // Input size of matrices
    printf("Enter rows and cols of the matrices:");
    scanf("%d%d", &rows, &cols);
    
   
    
    //Input elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<cols; j++){
        
            scanf("%d", &a[i][j]);
        }
    }
    
     //Input elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<cols; j++){
        
            scanf("%d", &b[i][j]);
        }
    }
    
    
      
    // matrix subtraction
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
           sub[i][j] = a[i][j] - b[i][j]  ;
       }
   }
   
    // Display the result
    printf("The subtraction of the two matrices is:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}