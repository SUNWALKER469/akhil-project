//WAP to check whether the number n is prime or composite
#include<stdio.h>

int main()
{
	int n, rem, count=0;
	printf("Enter a number:");
	scanf("%d", &n);
	
	 // 0 and 1 are neither prime nor composite
    if (n== 0 || n== 1) {
        printf("%d is neither prime nor composite.\n", n);
        return 0;
    }
    
    //check for factors
	for(int i=1; i<=n; i++) {
		rem = n % i;  // use modulus to check divisibility
		if(rem==0) {
			count++;
		}
	}
	if (count==2) { //prime number has 2 factors i.e 2 has factor 1 and 2
		printf("prime");
	} else {
		printf("composite"); //composite number has more than 2 factors i.e. 6 has factor 1, 2, 3, and 6
	}
	return 0;
}