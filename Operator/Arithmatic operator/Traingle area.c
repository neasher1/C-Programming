// Write a program that calculates the area of triangle

#include<stdio.h>
int main()
{

    float base,height,area;
    printf("Enter base = ");
    scanf("%f",&base);

    printf("Enter height = ");
    scanf("%f",&height);

    area = (float)1/2 * base * height;  // type casting
    printf("Area = %.2f\n",area);


}
