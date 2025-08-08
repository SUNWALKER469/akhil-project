//WAP to print the tables of 2 in reverse order
#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("Akhil Hamal\n");
	
	printf("Enter a number:");
	scanf("%d", &n);
	
	for(int i = 10; i>=1; i--) {
		printf("%d\n", n*i);
	}
	getch();
	return 0;
}