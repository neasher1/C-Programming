#include <stdio.h>
enum days_of_week{

    Sat,Sun,Mon,Tue,Wed,Thu,Fri

};


int main()
{
    enum days_of_week day1,day2;

    day1 = Sat;
    printf("Day1 = %d\n",day1);

    day2 = Fri;
    printf("Day2 = %d\n",day2);

    int dif = day2 - day2;
    printf("Dif = %d",dif);




}
