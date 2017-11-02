#include <stdio.h> 
#include <malloc.h> 
#include <stdlib.h> 
#include <locale.h>

int main() 
{ 

	float *x; 
	float min =  2147483646;
	int i = 0, n, sum = 0, k = 0, j; 
	printf("Put ther number: "); scanf("%d", &n); 
	x=(float*)malloc(n*sizeof(float));
	
	for (;i<n;i++){ 
		printf("x[%d]= ", i); scanf("%f", &x[i]);
		
		if (x[i] < min){
			min = x[i]; 
			sum = i;
		}
		else if (x[i] == min){
			sum += i;
		}
	}
	printf("%d", sum); 
	free(x);
}
