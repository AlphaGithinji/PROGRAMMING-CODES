//do while loop
#include <stdio.h>
int main(){
	
	int i,start,stop,sum=0;

	
	printf("To start at:");
	scanf("%d",&start);
	
	printf("To stop at:");
	scanf("%d",&stop);
	
	i=start;
	
	
	do {
		printf("%d\n",i);
        sum +=i;
        i++;
		
	}
		
		while(i<=stop);
		printf("The sum is:%d\n",sum);
		
	
	return 0;
}