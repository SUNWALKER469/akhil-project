//Use of calloc
#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Akhil Hamal\n");
	float*ptr;
	ptr = (float*) calloc (5,sizeof(float));
	
	for(int i=0; i<5; i++) {
		printf("%f\n", ptr[i]);
	}
	return 0;
}