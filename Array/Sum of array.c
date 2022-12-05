#include<stdio.h>
int main()
{
    int num[5]= {10,20,30,40,51};  // Initialization array during declaration;
    int sum=0,i;

    //num[0] = 10;
    //num[1] = 20;
    //num[2] = 30;
    //num[3] = 40;
    //num[4] = 50;

    for(i=0; i<5; i++)
    {
        sum = sum + num[i];
    }
    printf("Sum = %d\n",sum);
    printf("Average = %.2f",(float)sum/5);



}
