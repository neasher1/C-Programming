// f = (c*1.8)+32

#include<stdio.h>
int main()
{

    float c,f;
    printf("Enter centrigrade = ");
    scanf("%f",&c);

    f = (c*1.8) + 32;
    printf("Farenheit = %.2f",f);
    return 0;


}
