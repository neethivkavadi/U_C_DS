#include <stdio.h>
#include <stdlib.h>

// prototype/header/signature of a funtion
int add(int a, int b){ // formal definition
	// this is the definition/declaration/elaboration
	int c;
	c=a+b;
	return c;
}

int main() {
	int x,y,z;
	x=10;
	y=5;
	z=add(x,y); // actual parameters
	// here we are calling the function
	printf("Sum is %d", z);
	return 0;

	// when called, the formal parameters are replaced with actual parameters

}
