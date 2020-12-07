#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
	int length;
	int breadth;
};

int main(){
	
	// ========================//
	// for a normal assignment //
	// ========================//

	// C++ Rectangle r = {10,5}; // this also works
	struct Rectangle r = {10,5};

	r.length = 10; 

	// =========================//
	// assignment using pointers//
	// =========================//

	struct Rectangle *p = &r; // with pointer
	p-> length = 9;

	printf("%d %d", p->length, p->breadth);

	// =========================//
	// created in heap          //
	// =========================//
	
	struct Rectangle *p1;
	p1 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
	// C++ p=new Rectangle;

	p1 -> length = 13;
	p1 -> breadth = 12;

	printf("\n%d %d", p1->length, p1->breadth);

	return 0;

}
