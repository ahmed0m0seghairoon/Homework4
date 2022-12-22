#include<stdio.h>

void main(){
    int num1, num2;

    printf("Please enter 2 numbers\n");
    scanf("%d%d",&num1,&num2);

    int max = (num1 > num2) ? num1 : num2;

    while (max % num1 != 0 || max % num2 != 0)
        max++;
    
    int lcm = max;

    printf("the LCM is %d", max);
}