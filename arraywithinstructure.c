#include<stdio.h>
#include<string.h>

// Global structure
struct person {
    char name[50];
    int age;
    float salary;
};

int main() {

    struct person persons[4];

    for (int i = 0; i < 4; i++) {
        printf("Enter information for Person %d\n", i + 1);

        
        printf("Enter Name: ");
        getchar(); 
        fgets(persons[i].name, sizeof(persons[i].name), stdin);

        // Remove newline character from name if exists
        size_t len = strlen(persons[i].name);
        if (len > 0 && persons[i].name[len - 1] == '\n') {
            persons[i].name[len - 1] = '\0';
        }

       
        printf("Enter Age: ");
        scanf("%d", &persons[i].age);

        
        printf("Enter Salary: ");
        scanf("%f", &persons[i].salary);

        printf("\n");
    }


    printf("Displaying information of all persons:\n\n");
    for (int i = 0; i < 4; i++) {
        printf("Person %d:\n", i + 1);
        printf("Name: %s\n", persons[i].name);
        printf("Age: %d\n", persons[i].age);
        printf("Salary: %.2f\n\n", persons[i].salary);
    }
}
