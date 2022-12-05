#include <stdio.h>
//global structure
struct person{

    int age;
    float salary;

};
int main()
{
    struct person person1[4];
    int i;

    for(i=0; i<4; i++){

        printf("Enter the information for person %d: \n",i+1);
        printf("Enter Age = ");
        scanf("%d",&person1[i].age);

        printf("Enter salaray = ");
        scanf("%f",&person1[i].salary);

    }

     for(i=0; i<4; i++){

        printf("\n\ninformation for person %d: \n",i+1);
        printf("Age = %d",person1[i].age);

        printf(" salaray = ");
        printf("%f",person1[i].salary);

    }


    getchar();
}
