#include <stdio.h>
int main()
{
    int num;
    printf("Enter any numbers: ");
    scanf("%d",&num);

    int output = square(num);

    printf("Square is: %d",output);

    getchar();

}

int square(int a)
{
    return a*a;
}
