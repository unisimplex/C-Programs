#include<stdio.h>

void main(){
int a=1;

do{
	int Arr[50] , i , arsize  ;
	printf("\n Array size ");
	scanf("%d",&arsize) ;
	
//Array populating	
	for(i=0; i<arsize; i++){
		printf("Enter the %d element ", i+1 );
		scanf("%d",&Arr[i]);
	}

// declaring binary_search elements	
	int f=0 , l=arsize-1 , mid = (f + l)/ 2, sEle , rounds=0 ;
	printf("\n Enter the element to be searched : ");
	scanf("%d",&sEle);
	
	for(i=0;i<arsize;i++){
		rounds++ ; 
		mid = (f + l)/ 2;
		if (Arr[mid]<sEle){
			f = mid + 1 ; 
		}
		else if (Arr[mid]>sEle){
			l = mid - 1 ;
		}
		else if (Arr[mid] == sEle){
			printf("\n Found Element at index %d in round: %d",mid,rounds);
			break ; }
			
		}
		if(f > l){
			printf("\n Element Not In the List");
		}
		printf("\n\n Press 1 to restart \n 2 to print the array \n Any key to End The Program \n");
		scanf("%d",&a);
		if (a == 2){
			for(i=0;i<arsize;i++){
				printf("%d ",Arr[i]);
			}
		//	printf("\n")
			a = 1;
			}
		
		
	}while (a == 1);
}

