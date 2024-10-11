#include<stdio.h> 
#include<math.h>
int sum(int a,int b,int c);
int main(){
	
float division(float a,float b);	
	int a,b,c;
	float div_1;
	int result;
	
	printf("Enter the values:");
	scanf("%d%d%d",&a,&b,&c);
	
result=sum(a,b,c);//function calling
div_1=division(12,15);

printf("The sum is:%d\n",result);
printf("The division is:%.2f",div_1);



}
//Function definition
int sum(int a,int b,int c){
int result;
result=a+b+c;

return result;	
}
float division(float a,float b){
float div;
div=a/b;
return div;
}