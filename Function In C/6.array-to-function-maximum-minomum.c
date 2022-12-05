#include <stdio.h>

int max(int x[])
{

    int i;
    int maxi = x[0];

    for(i=1; i<5; i++)
    {

        if(maxi<x[i])
            maxi = x[i];
    }


    return maxi;

}

int min(int y[])
{

    int i;
    int mini = y[0];

    for(i=1; i<5; i++)
    {

        if(min>y[i])
            mini = y[i];
    }


    return mini;

}

int main()
{
    int num[] = {1,12,3,4,5};

    int maximumValue = max(num);

    int minimumValue = min(num);

    printf("Maximum Number is: %d\n",maximumValue);
    printf("Minimum Number is: %d\n",minimumValue);


}
