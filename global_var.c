// 1. Write a program in C to display n terms of natural numbers and their sum.

#include<stdio.h>

void main(){
    int i,n, result=0;
    printf("Enter the Number:");
    scanf("%d", n);
    for(i=0;i<n;i++){
        result +=i;
    }
    printf("The Natural Numbers Strating from %d are %d",n, result);
}
