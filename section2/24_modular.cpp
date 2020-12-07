#include <iostream>
#include <stdio.h>

using namespace std;

int area(int length, int breadth)
{
	return length*breadth;
}

int perimeter(int length, int breadth)
{
	int p;
	p=2*(length+breadth);

	return p;
}

int main()
{

	int length = 0, breadth=0;

	printf("Enter Length and Breadth: ");
	cin>>length>>breadth;

	// user interaction in main, calculation in functions
	int a = area(length, breadth);
	int p = perimeter(length, breadth);

	printf("\nArea %d, Perimeter %d", a, p);

	return 0;
}
