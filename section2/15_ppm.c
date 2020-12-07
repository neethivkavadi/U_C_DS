#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;

}

int add(int x, int y)
{
	int z;
	z = x+y;
	return z;
}

int main(){

	int a = 5, b = 6, c;
	c = add(a,b);
	printf("Call by value: %d + %d = %d\n", a, b, c);
	swap(&a, &b);
	printf("Call by address: Swapping 5, 6: %d, %d\n", a, b);
	return 0;
}
