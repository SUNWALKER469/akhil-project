//WAP to open values of old string to new string.

#include<stdio.h>
#include<string.h>

int main()
{
	char oldstr[] = "Hello";
	char newstr[] = "World";	
	strcpy (newstr, oldstr);
	puts(newstr);
	
}