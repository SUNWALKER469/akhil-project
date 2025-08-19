//WAP to concatenates first string with second string.
#include<stdio.h>
#include<string.h>

int main()
{
	printf("Akhil Hamal\n");
	char firststr[100] = "Hello ";
	char secstr[] = "World";
	strcat(firststr, secstr);
	puts(firststr);
}