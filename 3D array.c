/*
Alpha Githinji
CT102/G/24626/24
*/


#include<stdio.h>
int main(){
	int i,j,h;
	
	int marks[2][2][3]={{{45,67,78},{67,90,34}},{{67,90,86},{67,90,86}}};
	
for(i=0;i<2;i++){
	
  for(j=0;j<2;j++){

	for(h=0;h<3;h++){
		
	printf("marks[%d][%d][%d]=%d\n",i,j,h,marks[i][j][h]);

}		
}
}
	return 0;
}
