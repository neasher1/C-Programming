#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedTemp;

    printf("Tempreature conversion menu :\n ");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            printf("Enter Fahrenheit temperature : ");
            scanf("%f",&temp);
            convertedTemp = (temp-32)/1.8;
            printf("The temperature in Celsius is : %f\n",convertedTemp);
            break;

        }

    case 2:
        {

            printf("Enter Celsius temperature : ");
            scanf("%f",&temp);
            convertedTemp = (temp*1.8)+32;
            printf("The temperature in Fahrenheit is : %f\n",convertedTemp);
            break;

        }

    default:
        printf("Not a correct option");

    }


}
