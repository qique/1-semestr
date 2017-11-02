#include <stdio.h> 

int main(){
	// ПЕРВЫЙ КОД  WHILE
	int A, B, Number;
	printf("Enter anwser: ");
	scanf("%d", &Number);
	printf("Enter the beginning of interval: ");
	
	scanf("%d", &A);
	printf("Enter the end of interval: ");
	scanf("%d", &B);
	printf("Even numbers in your interval are: ");
	if (A>B)
		printf("Error");
	else if (A>0){
		printf("0");
		return 0;
	}	
	else
	{
	
	switch(Number)
	{
		case 1:
		{
			while(A<=B && A < 0){
				if(A%2 == 0) {
					printf("\n%d", A);
					A++;
				}
				else {
					A++;
					continue;
				}
			}
			break;
		}
		// ВТОРОЙ КОД FOR	
	
		case 2:
		{
			for(; A<=B && A < 0; A++)
			{
			if(A%2 == 0)
				printf("\n%d", A);
			else 
				continue;
			}
			break;
		}
	// ТРЕТИЙ КОД do while
		case 3:
		{
			do{
				if(A%2 == 0 && A < 0) {
						printf("\n%d", A);
						A++;
					}
					else {
						A++;
						continue;
					}
			} 
			while(A<=B);
			break;
		}
		default:
		printf("Error");
	}
}
}
