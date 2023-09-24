#include <stdio.h>

struct Student {
    char name[50];
    char surname[50];
    int age;
};

int main() {
    int numStudents;

    printf("How many students are in your group? ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter surname: ");
        scanf("%s", students[i].surname);

        printf("Enter age: ");
        scanf("%d", &students[i].age);
    }

    printf("\nList of students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Name: %s, Surname: %s, Age: %d\n", students[i].name, students[i].surname, students[i].age);
    }

    return 0;
}

