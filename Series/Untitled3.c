#include<stdio.h>
int main()
{
   double n,i,sum=0;
   printf("Enter number : ");
   scanf("%lf",&n);

   for (i=1; i<=n; i++)
   {
       sum = sum + i;  // 1 + 1/2 + 1/3

       if (i==1)
        printf("1 +");

       else if(i==n)
        printf("(1/%lf)",i);

       else
        printf("(1/%lf) +",i);
   }

   printf(" = %lf",sum);




}
