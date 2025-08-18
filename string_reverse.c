 // Program to reverse the string
#include <stdio.h>
#include <string.h>
int main()
{
char string[25], reverse_string[25];
int length, i, j;
printf("AKhil Hamal\n");
printf("Input string to be reversed:\n");
scanf("%s", string);
length=strlen(string);
for(j=0,i=length-1;j<length;j++,i--)
reverse_string[j]=string[i];
reverse_string[j]='\0';
puts(reverse_string);

}