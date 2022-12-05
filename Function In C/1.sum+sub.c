#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int add(int a,int b, int c){
    return a+b+c;
}

void sub1(int a, int b){
    printf("The sub1 is: %d\n",a-b);
}

void sum1(int a, int b, int c){
    printf("The SUM is: %d\n",a+b+c);
}

int main()
{
    int num1,num2;

    printf("Enter number1: ");
    scanf("%d",&num1);

    printf("Enter 2nd number: ");
    scanf("%d",&num2);

    int result = sum(num1,num2);
    int result1 = sum(num1,num2);

    printf("The sum is: %d\n",result);
    printf("The sum is: %d\n",result1);

    printf("The subtraction: %d\n",sub(10,5));
    printf("The Addition: %d\n",add(10,5,19));


    sub1(1,2);
    sum1(1,2,3);

    getchar();

}

