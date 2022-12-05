#include <stdio.h>
#include <stdlib.h>

int main()
{
    int styear,endyear,i;

    printf("Enter 1st year: ");
    scanf("%d",&styear);

    printf("Enter end year: ");
    scanf("%d",&endyear);

    for(i=styear;i<=endyear;i++)
    {
        if((i%400==0) || (i%4==0 && i%100!=0))
            printf("%d\n",i);
    }
    return 0;
}
