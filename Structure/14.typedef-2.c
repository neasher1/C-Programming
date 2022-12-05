#include <stdio.h>

struct book{

    char name[20];
    int price;

};

int main()
{
    typedef struct book change;

    change b = {"C Programming",350};
    printf("%s\n",b.name);
    printf("%d",b.price);

    getchar();


}
