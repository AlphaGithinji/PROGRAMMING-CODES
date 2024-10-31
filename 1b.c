/*
Alpha Githinji
CT102/G/24626/24
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
    
}students;

int main() {
	int i;
    struct students ;
    FILE *file = fopen("C:\\Users\\HP Elitebook\\Desktop\\C programs\\students.txt", "w");

    if (file == NULL) {
        printf("Error opening file!");
        exit(1);
	}
    


    for( i = 0; i < 5; i++) {
    	
        printf("Enter name of student %d: ");
        scanf("%s", students.name);
        
        printf("Enter marks of student %d: ");
        scanf("%d", &students.marks);


        fprintf(file, "Name: %s, Marks: %d\n", students.name, students.marks);
    }

    fclose(file);
    printf("Data successfully written to file.\n");

    return 0;
}
