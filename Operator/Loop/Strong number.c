/*
    145 = 1!+4!+5! = 1+24+120 = 145;
    strong number holo mul number er proti ti sonkhar factorila er jogfol jodi soman
    hoy tahole ota strong number;

*/

#include<stdio.h>
int main()
{

    int num,temp,rem,sum=0,i,fact;
    printf("Enter any numbers : ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {

        rem = temp % 10;

        fact = 1;
        for(i=1;i<=rem; i++)
        {

            fact = fact * i;

        }

        sum = sum + fact;
        temp = temp /10;

    }

    if(sum==num)
    {
        printf("%d is STRONG number",num);
    }

    else
        printf("%d Is not STRONG number",num);




}
