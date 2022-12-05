#include<stdio.h>

int sum(int a,int b,int c)
{
    return a+b+c;
}

void sum1(int x,int y, int z)
{
    printf("The SUM1 is = %d\n",x+y+z);
}

void sub(int x,int y)
{
    printf("The SUB is = %d\n",x-y);
}

float div(int x1,int x2)
{
    return x1/x2;
}

int main()
{

    int a,b,c;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    printf("The sum is = %d\n",sum(a,b,c));


    sum1(3,5,7);
    sub(10,5);

    //
    div(10,15);
    int x1,x2;
    printf("The DIV is = %.2f\n",div(x1,x2));

}
