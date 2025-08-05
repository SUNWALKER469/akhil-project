//WAP to print all even numbers from 1 to 100 using for loop.
	#include<stdio.h>
	int main() 
	{
		for(int i = 1; i<=100; i++) {
			if(i%2==0){
				printf("%d\n",i);
			} //even
		}
		return 0;
	}