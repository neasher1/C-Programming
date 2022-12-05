#include<stdio.h>
#include<math.h>
int main()
{

    // log
    double x = 4.33;
    double result = log(x);

    //log10
    double x1 = 3.22;
    double result1 = log10(x1);

    // sin
    double x2 = 5;
    double result2 = sin(x2);

    // exponential
    double x3 = 0.35;
    double result3 = exp(x3);

    printf("log(%lf) = %.2lf\n",x,result);   // log
    printf("log10(%.2lf) = %.2lf\n",x1,result1);   // log10
    printf("sin(%.2lf) = %.2lf\n",x2,result2);    // sin
    printf("exp(%.2lf) = %.2lf\n",x3,result3);    // exp



}
