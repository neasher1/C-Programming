// write a program that takes two integer and print sum,avg.

#include<stdio.h>
int main()
{

    int num1,num2,sum;
    float avg;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    sum = num1 + num2;
    printf("The sum = %d\n",sum);

    avg = (float)sum/2;  //type casting
    printf("The avg = %.2f\n",avg);





}
