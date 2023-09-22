#include<stdio.h>
void main(){
	int i,j,n,m, result;
	printf("Enter the table number:");
	scanf("%d",&n);
	printf("Enter the count number:");
	scanf("%d",&m);
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			result = j*n;	
		}printf("\n The result is %d", result);
	}
}
