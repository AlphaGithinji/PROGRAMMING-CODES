#include<stdio.h>

int main(){
	int marks;

char* getgradecomment(int marks) {
	if(marks >=90){printf("Grade A  Excellent Work!");}
		
    else if(marks>=80){printf("Grade B Very good job!\n");}
    	
 	else if (marks>=70){printf("Grade C   Good effort!\n");}
 		
   else if(marks>=60){printf("Grade D  Satisfactory,but no room for iprovement.\n");}
   	
   	else if(marks>=50){printf("Grade E  You need to work harder.\n");}
   		
   		else{printf("Grade E\tFail,please try again.\n");}
}

	
	printf("Enter the marks:");
	scanf("%d",&marks);
	
	getgradecomment(marks);
	
	return 0;
}