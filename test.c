#include <stdio.h>

int main(void) {

	int a;
	int b;
	int c;

	printf("Enter 3 numbers\n");
	
	scanf("%d", &a);
	scanf("%d",&b);
	scanf("%d", &c);

	if(a >= b && a >= c) {
	printf("%d\n", a);

	} else if(b >= c && b >=a) {
		printf("d\n"); 

	} else {
		printf("%d\n", c); 
	}
	return 0;
	}


