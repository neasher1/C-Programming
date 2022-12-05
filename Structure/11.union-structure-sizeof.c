#include <stdio.h>
//union share the same memory location
union test1
{

    int x,y;
    char ch;

};
union test2
{

    char name[20];
    char ch;

};

union test3
{

    int x;
    char ch;
    double y;
    float x1;

};

struct test4
{

    char ch;
    int x;
    float y;
    double z;

};

struct test5{

    char ch;
    char ch1[20];
};



int main()
{

    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;
    struct test5 t5;

    printf("Sizeof(t1) = %d bytes\n",sizeof(t1));
    printf("Sizeof(t2) = %d bytes\n",sizeof(t2));
    printf("Sizeof(t3) = %d bytes\n",sizeof(t3));
    printf("Sizeof(t4) = %d bytes\n",sizeof(t4));
    printf("Sizeof(t5) = %d bytes\n",sizeof(t5));


}
