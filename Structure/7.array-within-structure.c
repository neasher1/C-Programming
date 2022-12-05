#include <stdio.h>
//global structure
//array within structure
struct person
{
    char name[50];
    int age;
    float salary;

};
int main()
{
    int i,num;
    printf("How many users data you want?: ");
    scanf("%d",&num);

    printf("You are selected %d users data, go ahead\n",num);

    struct person person1[num];

    for(i=0; i<num; i++)
    {

        printf("\nEnter the information for person %d: \n",i+1);
        printf("Enter your Name: ");
        //fflush(stdin);
        scanf("\n");
        gets(person1[i].name);

        printf("Enter Age = ");
        scanf("%d",&person1[i].age);

        printf("Enter salaray = ");
        scanf("%f",&person1[i].salary);

    }

    for(i=0; i<num; i++)
    {

        printf("\n\ninformation for person %d: \n",i+1);

        printf("Name: %s\n",person1[i].name);
        printf("Age = %d\n",person1[i].age);
        printf("salaray = %.2f",person1[i].salary);

    }


    getchar();
}
