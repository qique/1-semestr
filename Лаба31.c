#include <stdio.h> 
#include <malloc.h> 
#include <stdlib.h> 


int main() 
{ 
	
	int i, n, sum = 0;
	int *x; 
	printf("Put the number "); scanf("%d", &n); 
	x = calloc(n,sizeof(int)); 
	for(i = 0; i<n; i++){
		scanf("%d", &x[i]);
		if(x[i]%9 == 0) 
			sum += x[i];
		else
			continue;
	
	}
	printf("%d", sum);
}
