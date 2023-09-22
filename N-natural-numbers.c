#include<stdio.h>
#include<conio.h>

void main(){
	int i,sum=0,myNum;
	printf("Enter the number:");
	scanf("%d", &myNum);
	for(i = 0; i <= myNum; i++){
		sum+=i;
		
	}printf("sum is %d", sum);
}
