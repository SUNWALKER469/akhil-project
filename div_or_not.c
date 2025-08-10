//WAP to check if a number is divisible by 2 or not.
#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	printf("Enter a numeber:");
	scanf("%d", &n);
	
	if(n%2==0) {
		printf("divisible\n");
	}else{
		printf("not possible");
	}
	
	return 0;
}
