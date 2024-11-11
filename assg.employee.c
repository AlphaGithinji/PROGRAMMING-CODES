#include<stdio.h> 
#include<string.h> 

struct employee{
	char name[20];
	int id;
	float salary;
}employee;

int main(){
	int i;
	
	for(i=0;i<3;i++){
		printf("Enter name:");
		scanf("%s",employee.name);
		
		printf("Enter your ID:");
		scanf("%d",&employee.id);
		
		printf("Enter the salary:");
		scanf("%f",&employee.salary);
		
		
	}
	
	for(i=0;i<3;i++){
		
	printf("Name:%s\n",employee.name);
	printf("ID NO.:%d\n",employee.id);
	printf("Salary:%.2f\n",employee.salary);
	}
	
	return 0;

}