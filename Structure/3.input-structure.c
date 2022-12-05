#include <stdio.h>
//global structure
struct person{
    int age;
    float salary;

};

int main()
{
    struct person person1,person2; //local variable

    printf("Enter elemenets for person1: \n");
    printf("Age = ");
    scanf("%d",&person1.age);

    printf("Salary = ");
    scanf("%f",&person1.salary);

    printf("\nPerson1 = ");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2lf\n",person1.salary);

    printf("\nEnter elemenets for person2: ");
    printf("Age = ");
    scanf("%d",&person2.age);

    printf("Salary = ");
    scanf("%f",&person2.salary);

    printf("\nPerson2 = ");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2lf\n",person2.salary);

    getchar();
}
