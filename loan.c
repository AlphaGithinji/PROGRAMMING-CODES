//Progrm to check loan eligibility
/*
Author:Alpha Githinji
Reg no:CT102/G/24626/24
Date:28/9/24
	*/

#include <stdio.h>
int main(){

    
    int age;
    double income;

    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your annual income: ");
    scanf("%lf", &income);
    
    if(age >= 21 && income >= 21000) {printf("Congratulations, you qualify for a loan.\n");} 

    else{printf("Unfortunately,we are unable to offer you a loan at this time.\n);}

	    return 0;
	}
    	
	else { printf("Unfortunately, we are unable to offer you a loan at this time.\n");}

 return 0;
}