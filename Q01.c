#include<stdio.h>

void main(){
    float side1, side2;

    printf("Please enter the sides \n");
    scanf("%f%f",&side1,&side2);

    float area = side1 * side2;
    float perimeter = 2*(side1 + side2);

    printf("The area is %f and the perimeter is %f", area, perimeter);
}