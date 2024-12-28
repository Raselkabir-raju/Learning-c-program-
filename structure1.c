#include<stdio.h>

//global structure

struct person
{
    int age;
    float salary;

};
int main()
{
    struct person person1,person2;
    person1.age=27;
    person1.salary=25000.5;

    printf("Person1 :\n");
    printf("Age = %d\n",person1.age);
    printf("Salary =%.2f\n",person1.salary);

        person2.age=29;
    person2.salary=28000.5;

    printf("Person2 :\n");
    printf("Age = %d\n",person2.age);
    printf("Salary =%.2f\n",person2.salary);

}