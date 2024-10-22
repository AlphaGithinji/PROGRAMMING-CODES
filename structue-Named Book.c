/*
Alpha Githinji
CT102/G/24626/24
*/

#include <stdio.h>
#include <string.h>


struct book {
    char title[30],ISBN[15],author[30];
    int publication_year;
    float price;
}BOOK;

int main() {
    	/*
    struct BOOK;
    
	strcpy(BOOK.title,"Introduction to C Programming");
	strcpy(BOOK.ISBN,"9780131103627");
	strcpy(BOOK.author,"John Smith");
	BOOK.publication_year=2022;      
	BOOK.price=49.99;   
	
	*/
	printf("Enter the Book Title:");
	scanf("%s",&BOOK.title);
	
	printf("Enter ISBN:");
	scanf("%s",&BOOK.ISBN);
	
	printf("Enter the Author's Name:");
	scanf("%s",&BOOK.author);
	
	printf("Enter the Publication Year:");
	scanf("%d",&BOOK.publication_year);
	
	printf("Enter the book price:");
	scanf("%f",&BOOK.price);
	
    
    printf("Title: %s\n", BOOK.title);
    printf("ISBN: %s\n", BOOK.ISBN);
    printf("Author: %s\n", BOOK.author);
    printf("Publication Year: %d\n",BOOK.publication_year);
    printf("Price: Ksh=%.2f\n", BOOK.price);
    
    return 0;
}