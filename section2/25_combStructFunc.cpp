#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

int area(Rectangle r) // writing struct not mandatory
{
        return r.length*r.breadth;
}

int perimeter(struct Rectangle r)
{
        int p;
        p=2*(r.length+r.breadth);

        return p;
}

void initialize(struct Rectangle *r, int l, int b)
{
	r->length=l;
	r->breadth=b;
}

int main(){

	Rectangle r={0,0}; // initialize
	
	int l,b;
	printf("Enter Length and Breadth: ");
	cin>>l>>b;

	initialize(&r, l, b);

	int a = area(r);
	int p = perimeter(r);

	printf("Area = %d\nPerimeter = %d\n", a, p);

	return 0;
}
