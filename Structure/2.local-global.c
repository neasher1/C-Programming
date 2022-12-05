#include <stdio.h>
//global structure
struct person{
    int age;
    float salary;

};

struct person person1,person2; //global variable

int main()
{
    //local structure

    //struct person{
    //int age;
    //float salary;

//};

    //struct person person1,person2; //local variable

    person1.age = 25;
    person1.salary = 123.979;

    printf("Person1 = ");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2lf\n",person1.salary);

    person2.age = 2522;
    person2.salary = 234232.979;

    printf("\nPerson2 = ");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2lf\n",person2.salary);

    getchar();
}
