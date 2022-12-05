#include<stdio.h>
int main()
{
    char source[] = "Hello WOrld!";
    char copy[30];

    strcpy(copy,source);

    printf("Source String: %s\n",source);
    printf("Copy String: %s",copy);

    getchar();

}
