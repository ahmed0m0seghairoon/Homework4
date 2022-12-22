#include<stdio.h>

void main(){
    int sum = 0;

    for (int i = 1; i <= 50; i++)
        sum += i;
    
    printf("The sum of the first 50 numbers is %d", sum);
}