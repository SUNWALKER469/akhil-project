//WAP to find the sum of n natural numbers(5) using recurssion
#include<stdio.h>
int sum(int n);

int main() {
    printf("Akhil Hamal\n");
    printf("sum is:%d",sum(5));
    return 0;
}
//recursive
int sum(int n) {
    if(n==1){
        return 1;
    }
    int sumNm1 = sum(n-1); //sum of n minus 1
    int sumNm = sum(n-1);
}

