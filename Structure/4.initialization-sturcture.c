#include <stdio.h>
//global structure
struct person{
    int age;
    float salary;

};

int main()
{
    struct person person1 = {10,25.33423}; //diretly initailization
    struct person person2,person3;

    //element wise assignment
    person2.age = 50;
    person2.salary = 50.07987;

    //structure variable assignment
    person3 = person2;


    printf("\nPerson1 = ");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2lf\n",person1.salary);

    printf("\nPerson2 = ");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2lf\n",person2.salary);

    printf("\nPerson3 = ");
    printf("Age = %d\n",person3.age);
    printf("Salary = %.2lf\n",person3.salary);

    getchar();
}
