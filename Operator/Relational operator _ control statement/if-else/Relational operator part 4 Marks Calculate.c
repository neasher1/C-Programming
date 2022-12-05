#include<stdio.h>
int main()
{

    float marks;
    printf("Enter your marks = ");
    scanf("%f",&marks);

    if(marks>=80)
        printf("Your GPA is A+");

    else if(marks>=70)
        printf("Your GPA is A");

    else if(marks>=60)
        printf("Your GPA is A-");

    else if(marks>=50)
        printf("Your GPA is B");

    else if(marks>=40)
        printf("Your GPA is C");

    else
        printf("You are Fail\a");


}
