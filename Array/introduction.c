// Array declaration : data_type array name[array_size];
#include<stdio.h>
int main()
{
    int num[5];  // Array declaration

    // array initialization :
    num[0] = 10;
    num[1] = 20;
    num[2] = 30;
    num[3] = 40;
    num[4] = 50;

    printf("number0 = %d\n",num[0]);
    printf("number1 = %d\n",num[1]);
    printf("number2 = %d\n",num[2]);
    printf("number3 = %d\n",num[3]);
    printf("number4 = %d\n",num[4]);

    int sum = num[0] + num[1] + num[2] + num[3] + num[4];
    printf("Sum = %d\n",sum);



}
