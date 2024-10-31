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
    FILE *file = fopen("students.txt", "a"); // Open in append mode

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
        
        
        fprintf(file, "Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    fclose(file);
    free(students);
    printf("Data appended to file successfully.\n");
    return 0;
}
