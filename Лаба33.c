#include <stdio.h> 
#include <malloc.h> 
#include <stdlib.h> 
#include <locale.h>

int main() 
{ 

	int i, n, j, k=0; 
	int *x, *a; 
	printf("Put length of array: "); scanf("%d", &n); 
	x = calloc(n,sizeof(int)); 
	for (i=0;i<n;i++){ 
		printf("x[%d]=", i); scanf("%d", &x[i]); 
		if (x[i]<0) 
			k++; 
	} 
	if (k>0) 
		{ 
		a = calloc((n+k*2),sizeof(int)); 
		for (i=0,j=0;i<n;i++,j++){ 
			if (x[i]<0){ 
				a[j]=0;  
				a[++j]=0; 
				a[++j]=0; 
			} 
			else{ 
				a[j]=x[i]; 
			} 
		} 
	}
	else
		a = x; 
	for (i=0;i<(n+k*2);i++) 
	printf("%d\t", a[i]);
}
