#include <stdio.h>
struct person{

    char name[20];
    int age;
    float salary;

};

void display(struct person p){

    printf("\nName: %s\n",p.name);
    printf("Salary: %.2f\n",p.salary);
    printf("Age: %d\n",p.age);


}

int main()
{
    struct person person1,person2;

    strcpy(person1.name,"Neasher AHmed");
    person1.age = 23;
    person1.salary = 223.233;

    display(person1);

    strcpy(person2.name,"Ashik Mahmud");
    person2.age = 26;
    person2.salary = 2323.2323;

    display(person2);


    getchar();


}
