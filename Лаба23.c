#include <stdio.h>
#include <stdlib.h>

int main() {
	double x,y,h,a,b,test;
	int Number;
	printf("Enter the Question: \n"); scanf("%d", &Number);
	printf("Enter the a: \n"); scanf("%lf", &a);
	printf("Enter the b: \n"); scanf("%lf", &b);
	printf("Enter the h: \n"); scanf("%lf", &h);
	x = a;
	test = x + 2;
	switch (Number){
		case 1: {
			while(a <= x && x <= b){	
				if (test <= 1){
					y = x*x;
					printf("Y = %.2f\t", y);
					printf("X = %.2f\n", x);
					x += h;
				}
				else if (1 < test && test < 10) {
					y = 1/(x+2);
					printf("Y = %.3f\t", y);
					printf("X = %.3f\n", x);
					x += h;
				}
				else {
					y = x + 2;
					printf("Y = %.2f\t", y);
					printf("X = %.2f\n", x);
					x += h;
				}
			}
		break;
		}
		case 2: {
			for (;a <= x && x <= b; x += h){
				if (test <= 1){
					y = x*x;
					printf("Y = %.2f\t", y);
					printf("X = %.2f\n", x);
					x += h;
				}
				else if (1 < test && test < 10) {
					y = 1/(x+2);
					printf("Y = %.3f\t", y);
					printf("X = %.3f\n", x);
					x += h;
				}
				else {
					y = x + 2;
					printf("Y = %.2f\t", y);
					printf("X = %.2f\n", x);
					x += h;
				}
			}
			break;
		}
		case 3: {
			do{
				if (a > x || x > b){
					printf("Error");
					break;
				}
				else if (test <= 1){
					y = x*x;
					printf("Y = %.2f\t", y);
					printf("X = %.2f\n", x);
					x += h;
				}
				else if (1 < test && test < 10) {
					y = 1/(x+2);
					printf("Y = %.3f\t", y);
					printf("X = %.3f\n", x);
					x += h;
				}
				else {
					y = x + 2;
					printf("Y = %.2f\t", y);
					printf("X = %.2f\n", x);
					x += h;
				}
			}
			while(a <= x && x <= b);
			break;
		}
		default:
			printf("error");
	}
}
