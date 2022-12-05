#include <stdio.h>
//union share the same memory location
union test{

    int x,y;

};


int main()
{
    union test t1;

    t1.x = 10;
    printf("t1.x = %d\n",t1.x);
    printf("t1.y = %d\n",t1.y);


    t1.x = 20;
    printf("\nt1.x = %d\n",t1.x);
    printf("t1.y = %d\n",t1.y);


    getchar();


}
