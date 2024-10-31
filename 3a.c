/*
ALPHA GITHINJI
CT102/G/24626/24
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student *students = (struct Student*) malloc(n * sizeof(struct Student));
    
    
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }


    FILE *file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fwrite(students, sizeof(struct Student), n, file);
    fclose(file);
    printf("Data written to binary file successfully.\n");

    
    struct Student *readStudents = (struct Student*) malloc(n * sizeof(struct Student));
    file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fread(readStudents, sizeof(struct Student), n, file);
    fclose(file);

    
    printf("\nData read from file:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Marks: %d\n", readStudents[i].name, readStudents[i].marks);
    }

    free(students);
    free(readStudents);
    return 0;
}
