#include<stdio.h>

// Global structure
struct person {
    int age;
    float salary;
};

int main() {

    struct person persons[2]; 

  
    for(int i = 0; i < 2; i++) {
        printf("Enter Information for Person%d\n", i + 1);
        printf("Enter Age: ");
        scanf("%d", &persons[i].age);

        printf("Enter Salary: ");
        scanf("%f", &persons[i].salary);

        printf("\n");
    }

    for(int i = 0; i < 2; i++) {
        printf("Person%d:\n", i + 1);
        printf("Age = %d\n", persons[i].age);
        printf("Salary = %.2f\n\n", persons[i].salary);
    }
 
    if(persons[0].age==persons[1].age && persons[0].salary==persons[1].salary) 
    {
        printf("Person1 equal Person2\n");
    }
        else
        {
        printf("Person1 not equal Person2\n");
        }
    
}
