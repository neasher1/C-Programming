#include <stdio.h>
#include <stdlib.h>
int checkLeapYear(int year){

    if( (year%400==0) || (year%4==0 && year%100!=0))
    {
        return 1;
    }
    else
        return 0;

}
int main()
{
    int i, endyear;
    printf("Enter end year: ");
    scanf("%d",&endyear);

    printf("Leap year programm 1 to %d:\n",endyear);
    for(i=1; i<=endyear; i++)
    {
        if(checkLeapYear(i)){
            printf("%d\t",i);
        }
    }
}



