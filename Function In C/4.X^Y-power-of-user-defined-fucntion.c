//base^exponenet
//2^3 = 2*2*2 = 8
//2^4 = 2*2*2*2 = 16

#include <stdio.h>

void CalltoPower(double base, double exp){
    double result=1,i;
    for(i=1; i<=exp; i++){
        result = result * base;
    }

    printf("The value of power is : %.2lf",result);

}

int main()
{
    double base,exp;

    printf("Enter base: ");
    scanf("%lf",&base);

    printf("Enter expo: ");
    scanf("%lf",&exp);

    CalltoPower(base,exp);


}


