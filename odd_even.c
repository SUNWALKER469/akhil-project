//WAP to check if a number is even or odd
#include<stdio.h>
#include<math.h>

int main()
{
	//getting input
	int n;
	printf("Enter a number:");
	scanf("%d", &n);
	
	if(n%2==0) { //rem 0 is always even number
		printf("even");
	}
	else {
		printf("odd"); //rem 1 is always odd number
	}
	return 0;
}