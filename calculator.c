//WAP to find addition, subtraction, multiplication, division and modulus of any two input device.
#include <stdio.h>

//First Calculator using C
int main()
{
	//Declaring Variables
	int firstNum, secondNum, add, sub, mul, mod;
    float div;

    printf("Enter two numbers:\n");
    scanf("%d%d", &firstNum, &secondNum);
	
	//Calculating
	add= firstNum + secondNum;
    sub= firstNum - secondNum;
    mul= firstNum * secondNum,
    div= firstNum / secondNum;
    mod= firstNum % secondNum;

	
	//Printing
	printf("The sum is %d\n", add);
	printf("The sub is %d\n", sub);
	printf("The mul is %d\n", mul);
	printf("The div is %.2f\n", div);
	printf("The mod is %d\n", mod);
	return 0;
}