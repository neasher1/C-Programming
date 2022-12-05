#include<stdio.h>
int main()
{
    int num[] = {10,5,6,4,1,12,24,53,9};
    int value,position=-1,i;

    printf("Enter the value you want to search : ");
    scanf("%d",&value);

    for(i=0; i<9; i++)
    {
        if(value==num[i])
        {
            position = i+1;
            break;
        }
    }

    if(position==-1)
        printf("Not found");
    else
        printf("The value (%d) is found at position (%d)",value,position);





}
