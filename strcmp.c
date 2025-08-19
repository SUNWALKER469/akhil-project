//WAP to compare 2 strings and return a value.
//0 ->string equal
//positive->first>second(ASCII) 
//negative->first<second(ASCII)

#include<stdio.h>
#include<string.h>

int main()
{
	printf("Akhil Hamal\n");
	char firststr[] = "Apple";
	char secstr[] = "Banana";
	printf("%d", strcmp(firststr,secstr)); 	//interchanging strcmp(firststr,secstr) with strcmp(secstr,firststr)) gives result +1;
}