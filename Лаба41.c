#include <stdio.h> 
#include <malloc.h> 
#include <stdlib.h> 


int main(){
	int exponent, i, j, amount = 0;
	printf("Put the power of nubmer: "); scanf("%d", &exponent);
	int *array;
	array  = (int*) malloc((exponent*exponent) * sizeof(int)); 
	for (i = 0; i < exponent; i++){
		for(j = 0; j < exponent; j++){
			printf("Put [%d][%d]-th element of array: ", i , j); 
			scanf("%d", (array + i*exponent + j));
			if((*(array + i*exponent + j) % 2 == 0) && (i > j) && (j + i >= exponent)) 
				amount++;
		}
	}
	free(array);
	printf("%d", amount);
}
