/*
Alpha Githinji
CT102/G/24626/24
*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
}student;

int main() {
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d", &n);


    FILE *file = fopen("C:\\Users\\HP Elitebook\\Desktop\\C programs\\students2.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    
    for ( i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", student.name);
        
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &student.marks);

        // Append data to file
        fprintf(file, "Name: %s, Marks: %d\n", student.name, student.marks);
    }

    fclose(file);
    
    printf("Data successfully appended to file.\n");

    return 0;
}
