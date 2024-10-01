//Program to print Compound Interest
/*
Author:Alpha Githinji
Reg No:CT102/G/24626/24
Date:22/9/24
*/

#include<stdio.h>
#include<math.h>

int main() {
	float principal;
	float  rate;
	float time;
	float compoundinterest;
	
	printf("Enter the Principal Amt:");
	scanf("%f", &principal);
	
	printf("\nEnter the rate of Principal:");
	scanf("%f",&rate);
	
	printf("\nEnter the Time Period( years):");
	scanf("%f",&time);
	
	compoundinterest=principal*pow(1+rate/100,time)-principal;
	
	printf("\nCompound Interest=%.4f\n",compoundinterest);
	
	return 0;	
}