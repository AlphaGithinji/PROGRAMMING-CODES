#include<stdio.h>

int main(){
	int bookId;
	int duedate;
	int returndate;
	int daysoverdue;
	int finerate=0;
	int fineamount;
	
  //inputs
	printf("Enter book Id:");
	scanf("%d",&bookId);
	
	printf("Enter due date(YYYYMMDD):");
	scanf("%d",&duedate);
	
	printf("Enter Return Date(YYYYMMDD):");
	scanf("%d",&returndate);
	
	// number of overdue days

	daysoverdue=returndate-duedate;
	
	//finerate

	if(daysoverdue <= 7){finerate=20;}

		else if(daysoverdue<=14){finerate=50;}

			else if(daysoverdue<=14){finerate;}
				
   //the total fine amount

fineamount=finerate*daysoverdue;

   
   printf("BookId: %d\n",bookId);
   printf("Due Date: %d\n",duedate);
   printf("Return Date: %d\n",returndate);
   printf("Days Overdue: %d\n",daysoverdue);
   printf("Fine rate: %d per day\n",finerate);
   printf("Total Fine Amount: %d\n",fineamount);
   
   return 0;
}
   
