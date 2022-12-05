#include<stdio.h>
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);

    int result = fact(num);
    printf("Fact = %d",result);

}

int fact(int num)
{
    if(num==1)
        return 1;
    else
        return num*fact(num-1);
}
