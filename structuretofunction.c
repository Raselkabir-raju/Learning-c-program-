#include<stdio.h>
#include<string.h>

struct person{
    char name[50];
    int age;
    float salary;

};

void display(struct person p)
{
    printf("\nName :%s\n",p.name);
    printf("Age :%d\n",p.age);
    printf("Salary : %2f\n",p.salary);

}
int main(){
    struct person person1,person2;

    strcpy(person1.name,"Rasel Kabir Raju");
    person1.age = 27;
    person1.salary = 250000.00;

    display(person1);

   strcpy(person2.name,"Mahi Islam");
    person2.age = 26;
    person2.salary = 2550000.00;

    display(person2);
}