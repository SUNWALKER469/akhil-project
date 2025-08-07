//WAP to print the factorial of a number n.
#include<stdio.h>

int main()
{
	int n, fact;
	printf("Akhil Hamal\n");
	
	printf("Enter a number:");
	scanf("%d", &n);
	
    fact = 1;
	for(int i=1; i<=n; i++){
		fact = fact*i;
	}
	printf("The factoriral is %d", fact);
	
	return 0;
}