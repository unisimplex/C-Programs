#include<stdio.h>

void main(){
	int A[50], arsize , i ,temp,j;
	
	printf("Enter the size of the array ");
	scanf("%d",&arsize);
	
	for(i=0;i<arsize;i++){
		printf("Enter the %d element ",i+1);
		scanf("%d",&A[i]);
	}
	
	printf("Unsorted list : ");
	for(i=0;i<arsize;i++){
		printf("%d ",A[i]);
	}
	
	for(i=0;i<arsize;i++){
		for (j=0;j<arsize-1;j++){
			if (A[j] > A[j+1]){
			temp = A[j];
			A[j] = A[j+1];
			A[j+1] = temp ; 
			}
		//printf("%d",i);
		}
	
	}
	printf("\nSorted list : ");
	for(i=0;i<arsize;i++){
		printf("%d ",A[i]);
	}
	
}
	
	
	

