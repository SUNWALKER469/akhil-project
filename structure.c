//WAP using structures that stores and displays student details.
//Syntax of structure:
//struct student{
//	char name[100];
//	int roll;
//	float cgpa;
// };

#include<stdio.h>
#include<string.h>

struct student{
	char name[100];
	int roll;
	float cgpa;
 };
 int main()
 {
 	struct student s1;
 	s1.roll = 2;
 	s1.cgpa = 3.7;
 	//s1.name = "Akhil Hamal"
 	
 	strcpy(s1.name, "AKhil Hamal");
 	
 	printf("Akhil Hamal\n");
 	printf("student name = %s\n", s1.name);
	printf("student roll no. = %d\n", s1.roll);
	printf("student cgpa = %f\n", s1.cgpa);
	
	return 0;	
 }