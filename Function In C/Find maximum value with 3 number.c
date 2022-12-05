#include<stdio.h>
int main()
{
    int a1,b1,c1;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d",&a1,&b1,&c1);

    int maximum = max(a1,b1,c1);  //max() function is used to find maximum between numbers
    printf("Maximum Number is = %d",maximum);

}

max(x1,x2,x3)
{
    if(x1>x2){
        if(x1>x3){
            return x1;
        }
        else{
            return x3;
        }
    }
    else{
        if(x2>x3){
            return x2;
        }
        else{
            return x3;
        }
    }
}
