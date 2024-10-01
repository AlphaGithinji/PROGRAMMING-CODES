#include <stdio.h>

    void checkLoanEligibility() {
    int age;
    double income;

    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your annual income: ");
    scanf("%lf", &income);
    
    if(age >= 21 && income >= 21000) {printf("Congratulations, you qualify for a loan.\n");} 
    	
	else { printf("Unfortunately, we are unable to offer you a loan at this time.\n");}
}

    // Function to calculate library fine
    void calculateLibraryFine() {
    int bookID;
	int dueDate;
	int returnDate; 
	int daysOverdue;
    double fineRate;
	double fineAmount;

    // Input prompts
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    
    printf("Enter Due Date (in days from today): ");
    scanf("%d", &dueDate);
    
    printf("Enter Return Date (in days from today): ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate based on overdue days
     if (daysOverdue <= 7 && daysOverdue > 0) {fineRate = 20; } 
    	
     else if (daysOverdue >= 8 && daysOverdue <= 14) {fineRate = 50;}
    
	 else if (daysOverdue >= 15) { fineRate = 100;}
	 	
	 else {fineRate = 0;}

    // Calculate total fine amount
    fineAmount = daysOverdue * fineRate;

    // Display results
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh %.2f\n", fineRate);
    printf("Fine Amount: Ksh %.2f\n", fineAmount);
}

    int main() {
    int choice;
    printf("Choose an option: \n");
    printf("1. Check Loan Eligibility \n");
    printf("2. Calculate Library Fine \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) { checkLoanEligibility();}
    	
    else if (choice == 2) { calculateLibraryFine();}
    	
	 else {printf("Invalid choice.\n");}

    return 0;
}
