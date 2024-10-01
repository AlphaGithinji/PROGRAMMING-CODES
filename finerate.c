#include<stdio.h>
int main(){
	int bookId;
	int duedate;
	int returndate;
	int daysoverdue;
	int finerate=0;
	int fineamount;
	
	//Taking inputs
	printf("Enter book Id:");
	scanf("%d",&bookId);
	
	printf("Enter due date(YYYYMMDD):");
	scanf("%d",&duedate);
	
	printf("Enter Return Date(YYYYMMDD):");
	scanf("%d",&returndate);
	
	//Calculating the number of overdue days
	daysoverdue=returndate-duedate;
	
	//determining thefine arte using if-else statement
	if(daysoverdue <= 7){finerate=20;}
		else if(daysoverdue<=14){finerate=50;}
			else if(daysoverdue<=14){finerate;}
				
   //Calculating the total fine amount
fineamount=finerate*daysoverdue;

   //Displaying the result
   printf("BookId: %d\n",bookId);
   printf("Due Date: %d\n",duedate);
   printf("Return Date: %d\n",returndate);
   printf("Days Overdue: %d\n",daysoverdue);
   printf("Fine rate: %d per day\n",finerate);
   printf("Total Fine Amount: %d\n",fineamount);
   
   return 0;
}
   
