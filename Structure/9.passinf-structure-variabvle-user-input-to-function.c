#include <stdio.h>
struct person
{

    char name[50];
    int age;
    float salary;

};

void display(struct person p)
{

    printf("\nName: %s\n",p.name);
    printf("Salary: %.2f\n",p.salary);
    printf("Age: %d",p.age);

}


int main()
{
    struct person person1,person2;

    printf("Enter Name: ");
    gets(person1.name);

    printf("Enter salary: ");
    scanf("%f",&person1.salary);

    printf("Enter Age: ");
    scanf("%d",&person1.age);

    display(person1);

    printf("\n\nEnter Name: ");
    scanf("\n");
    gets(person2.name);

    printf("Enter salary: ");
    scanf("%f",&person2.salary);

    printf("Enter Age: ");
    scanf("%d",&person2.age);

    display(person2);


    getchar();


}
