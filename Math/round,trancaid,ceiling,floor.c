#include<stdio.h>
#include<math.h>
int main()
{

    double x = 1.3344;
    double result = round(x);

    double x1 = 1.58;
    double result1 = round(x1);

    double x2 = 4.5556788;    // output integer number
    double result2 = trunc(x2);

    double x3 = 4.5;
    double result3 = ceil(x3);    // ceiling

    double x4 = 3.4;
    double result4 = floor(x4);   // floor

    printf("round(%lf) = %lf\n",x,result);    // round
    printf("round1(%lf) = %lf\n",x1,result1);   // round
    printf("trunc(%lf) = %lf\n",x2,result2);    //  truncaid
    printf("Ceiling(%lf) = %lf\n",x3,result3);  // ceiling
    printf("floor(%lf) = %lf\n",x4,result4);  // floor


}
