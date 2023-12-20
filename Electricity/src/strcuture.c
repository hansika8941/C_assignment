#include <stdio.h>
 
struct student {
    char name[50];
    int age;
    float salary;
};
 
struct School {
    char name[50];
    int num_students;
    struct student students[100];
};
 
void strt_fun() {
    struct School org;
    printf("Enter School name: ");
    scanf("%s", org.name);
    printf("Enter number of students: ");
    scanf("%d", &org.num_students);
    for (int i = 0; i < org.num_students; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", org.students[i].name);
        printf("Enter age: ");
        scanf("%d", &org.students[i].age);
        printf("Enter salary: ");
        scanf("%f", &org.students[i].salary);
    }
 
    printf("\nSchool details:\n");
    printf("Name: %s\n", org.name);
    printf("Number of students: %d\n", org.num_students);
    printf("student details:\n");
    for (int i = 0; i < org.num_students; i++) {
        printf("Name: %s\n", org.students[i].name);
        printf("Age: %d\n", org.students[i].age);
        printf("Salary: $%.2f\n", org.students[i].salary);
    }
}
 