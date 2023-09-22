#include<stdio.h>

void main(){
	int i,j, result =0, myNum;
	printf("Enter the number:");
	scanf("%d", &myNum);
	for(i=1;i<=myNum;i++){
			result = i*i*i;
		printf("\nThe number is %d and its cube is %d",i, result);
	}	
}	

