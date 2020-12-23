#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

// make a error free template and then convert to templete

template<class T>
class Arithmetic
{
	private:
		T a;
		T b;
	public:
		Arithmetic(T a, T b);
		T add();
		T sub();
};
		
	template <class T>
	Arithmetic<T>::Arithmetic(T a, T b)
	{
		this->a=a;
		this->b=b;
	}

	template <class T>
	T Arithmetic<T>::add()
	{
		T c;
		c=a+b;
		return c;
	}

	template <class T>
	T Arithmetic<T>::sub()
	{
		T c;
		c=a-b;
		return c;
	}


int main(){

	Arithmetic<float> ar(10.99,5.44);

	cout<<"Add "<<ar.add()<<endl;
	cout<<"Sub "<<ar.sub()<<endl;

	return 0;
}
