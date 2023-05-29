#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    int n,i;

    printf("Enter the number of persons: ");
    scanf("%d", &n);

    Person* people = (Person*)malloc(n * sizeof(Person));

    if (people == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter the name of person %d: ", i + 1);
        scanf("%s", people[i].name);

        printf("Enter the age of person %d: ", i + 1);
        scanf("%d", &people[i].age);
    }
    system("cls");

    printf("\nEntered Data:\n");
    for (i = 0; i < n; i++) {
        printf("Person %d\n", i + 1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("\n");
    }

    free(people);

    return 0;
}
