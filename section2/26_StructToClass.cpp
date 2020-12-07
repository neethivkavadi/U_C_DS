#include <iostream>
#include <stdio.h>

using namespace std;

// struct and class is the same in cpp except that elements in struct 
// are public but elements in class are private by default

class Rectangle // can also write struct in place of struct in cpp
{
public:
	int length;
        int breadth;

int area() // writing struct not mandatory
{
        return length*breadth;
}

int perimeter()
{
        int p;
        p=2*(length+breadth);

        return p;
}

void initialize(int l, int b)
{
        length=l;
        breadth=b;
}
};

int main(){

        Rectangle r; // initialize

        int l,b;
        printf("Enter Length and Breadth: ");
        cin>>l>>b;

	// Object contains properties and methods

        r.initialize(l, b);

        int a = r.area();
        int p = r.perimeter();

        printf("Area = %d\nPerimeter = %d\n", a, p);

        return 0;
}
