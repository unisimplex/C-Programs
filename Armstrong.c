#include<stdio.h>
#include<math.h>
int main(){
	int i , j , r , num , sum ,p;
	printf("Enter the number of digits in armstrong \t");
	scanf("%d",&p);
	
	for(i=1;i<10000;i++){
		//printf("%d",i);
		sum = 0;
		for(j=i ; j!=0 ; j=j/10){
			r = j%10;
			sum = sum + pow(r,p);}
			
	if(sum==i){		
			printf("%d \n",i);}
		
	
	}
	
}
