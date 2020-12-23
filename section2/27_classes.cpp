#include <iostream> // can also use iostream.h depending on the compiler
#include <stdio.h>

using namespace std; // for cin and cout

class Rectangle
{
private:
	int length;
	int breadth;

public:
	Rectangle() // non-argument constructor
	{
		// can also check for validations here
		length=breadth=0;
	}

	Rectangle(int l, int b)
	{
		length = l;
		breadth = b;
	}

	int area()
	{
		return length*breadth;
	}
		
	int perimeter()
	{
		return 2*(length+breadth);
	}

	int getLength()
	{
		return length;
	}

	void setLength(int l)
	{
		length = l;
	}

	int getBreadth()
	{
		return breadth;
	}

	void setBreadth(int b)
	{
		breadth = b;
	}

	~Rectangle() // destructor T_T
	{
		cout<<"Destructor";
	}
};

int main(){

	Rectangle r(10,5);

	cout<<"Area: "<<r.area()<<endl;
	cout<<"Perimeter: "<<r.perimeter()<<endl;
	
	r.setLength(20);
	cout<<"Set length to 20: "<<r.getLength()<<endl;

	Rectangle r1;
	cout<<"Reset: length="<<r1.getLength()<<" breadth="<<r1.getBreadth()<<endl; 
}
