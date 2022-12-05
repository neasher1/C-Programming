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

    if(person3.age == person2.age && person3.salary == person2.salary)
        printf("Person3 is equal to perosn2");
    else
        printf("Not equal");

    getchar();
}
