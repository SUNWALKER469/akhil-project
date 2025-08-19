//WAP using struct that stores and displays student details.
//Syntax of structure:
//struct student{
//	char name[100];
//	int roll;
//	float cgpa;
// };

#include <stdio.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main() {
    struct student s1 = {"Akhil Hamal", 2, 3.7};

    printf("Akhil Hamal\n");
    printf("Name: %s\nRoll: %d\nCGPA: %.2f\n", s1.name, s1.roll, s1.cgpa);

    return 0;
}
