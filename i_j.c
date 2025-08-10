//WAP for the output
//1  10  101  1010  10101
#include<stdio.h>

int main()
{
	int i,j;
	for(int i=1; i<=5; i++) {
		for(int j=1; j<=i; j++) {
			if(j%2 == 0){
			
			printf("0");
		}else  
		printf("1");
	}
	printf("\n");
}

	return 0;
	
}