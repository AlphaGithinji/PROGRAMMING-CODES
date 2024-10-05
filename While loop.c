//While loop
#include<stdio.h>
int main(){
	int start,i;
	int stop;
	
	printf("To start at:");
	scanf("%d",&start);
	
	printf("To stop at:");
	scanf("%d",&stop);
	
	i=start;
	
	while(i<=stop){
		printf("%d\n",i);
		i++;
	}

	
	return 0;
	
}