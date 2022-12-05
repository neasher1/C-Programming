#include<stdio.h>
int main()
{

    int num,rem,temp,sum=0;
    printf("Enter any numbers : ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp = temp / 10;
    }

    if(sum==num)
        printf("(%d) is Palindrome number",num);    // reverse number and main number same hole palindrome;
                                                    // sum - reverse number

    else
        printf("Not a palindrome number");


}
