//Program to print Simple Interest formula
/*
Author:Alpha Githinji
Reg No:CT102/G/24626/24
Date:22/9/24
*/
//preprocessor directive
#include<stdio.h>
int main(){
	float principal,rate,time,simpleinterest;
	
	printf("Enter the principal amount:");
	scanf("%f",&principal);
	
	printf("Enter the rate of period:");
	scanf("%f",&rate);
	
	printf("Enter the time period(years):");
	scanf("%f",&time);
	
	simpleinterest=(principal*rate*time)/100.;
	
	printf("The Simple interest is %.3f",simpleinterest);
	
	return 0;
}