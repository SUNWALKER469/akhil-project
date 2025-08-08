//Function with no arguments and return value
#include <stdio.h>

//Function Declaration
int add();

////Main function
int main()
{
int x;
x=add();
printf("The sum is:%d\n", x);
return 0;
}

//Function Definiton
int add()
{
int a, b;
printf("Enter two numbers:\n");
scanf("%d %d", &a, &b);     
int sum;
sum=a + b;
return sum;
}