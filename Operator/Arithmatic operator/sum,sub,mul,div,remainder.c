//write a program that takes two integer and prints sum,sub,mul,div and remainder

#include<stdio.h>
int main()
{

    int num1,num2,result;
    printf("Enter two number = ");
    scanf("%d %d",&num1,&num2);

    result = num1 + num2;
    printf("Sum = %d\n",result);

    result = num1 - num2;
    printf("Sub = %d\n",result);

    result = num1 * num2;
    printf("Mul = %d\n",result);

    result = num1 / num2;
    printf("Div = %d\n",result);

    result = num1 % num2;
    printf("Remainder = %d\n",result);

    return 0;


}
