#include<stdio.h>

/*
	Q1. Write a Program to find the length of a 1D array.
		For example,
		Input:
		 Enter array size: 5
		 Enter array elements:
		 a[0] = 3
		 a[1] = 7
		 a[2] = 1
		 a[3] = 8
		 a[4] = 6
		Output:
		 Length of an Array: 5
*/

main(){
	
	int a,b;
	
	printf("Enter array size: ");
	scanf("%d",&b);
	
	printf("Enter array elements: \n");
	int arry[b];
	for(a=0; a<b; a++){
		printf("arry[%d]",a);
		scanf("%d",&arry[a]);
	}
	
	printf("Length of an Array %d:", a);
	
}
