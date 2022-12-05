// C = (F - 32) / 1.8;

#include<stdio.h>
int main()
{

    float c,f;
    printf("Enter farenheit = ");
    scanf("%f",&f);

    c = (f-32)/1.8;
    printf("Centrigrade = %.2f",c);

}
