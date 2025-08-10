//WAP to print sum of numbers and reverse them in order.
#include<stdio.h>

int main() {
int n;
printf("Enter a number:");
scanf("%d", &n);

int sum = 0;
for(int i=1; i<=n; i++) {
    sum += i;
}
printf("The sum is:%d\n", sum);

for(int i=n; i>=1; i--) {
    printf("%d\n", i);
}
return 0;

}
