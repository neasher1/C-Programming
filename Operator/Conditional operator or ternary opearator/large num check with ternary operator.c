#include<stdio.h>
int main()
{

    int num1,num2,large;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&num1,&num2);

    large = num1>num2 ? num1 : num2;
    printf("Large = %d",large);


}
