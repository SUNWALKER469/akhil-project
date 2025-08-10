//WAP to print the table of 2.
#include<stdio.h>

int main() {
	int n;
	printf("Enter a number:");
	scanf("%d", &n);
	
	for(int i=1; i<=10; i++) {
		printf("%d\n", n*i);
	}
	return 0;
}