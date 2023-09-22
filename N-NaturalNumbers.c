#include <stdio.h>
#include <math.h>

void main() {
    	int i, value, limit;
    	double sum = 0;
    	printf("Enter Value of X: ");
    	scanf("%d", &value);
    	printf("Enter Limit: ");
    	scanf("%d", &limit);
    	for (i = 0; i < limit; i++) 
		{
        	if (i % 2 == 0) {
          		  sum += pow(value, 2 * i + 1);
        } 
else {
          	  sum -= pow(value, 2 * i + 1);
        }
    }

    printf("\nSum Of Series is %lf",sum);
} 

