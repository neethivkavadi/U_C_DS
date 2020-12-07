#include <stdio.h>
#include <stdlib.h>

struct ArrRect
{
	int A[10];
	int num;
};

struct Rectangle
{
	int length;
	int breadth;
};

void ArrRectFunc(struct ArrRect r4, int num)
{
	printf("\n\nCall by value - array in a struct: A[]=");
	for(int i=0;i<num;i++)
	{
		r4.A[i] = i;
		printf("%d ", r4.A[i]);
	}
}

void fun(struct Rectangle r1) // call by value
{
	printf("\n\nfrom fun: length %d, breadth %d", r1.length, r1.breadth);
	r1.length = 15;
	r1.breadth = 30;
	printf("\nfrom fun: length %d, breadth %d (modified)", r1.length, r1.breadth);
}

void fun2(struct Rectangle *p) // call by address
{
        printf("\n\nfrom fun2: length %d, breadth %d", p->length, p->breadth);
        p->length = 15;
        p->breadth = 30;
        printf("\nfrom fun2: length %d, breadth %d (modified)", p->length, p->breadth);
}

struct Rectangle *fun3()
{
	struct Rectangle *p;
	p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
	p->length=15;
	p->breadth=7;
	return p;
}

int main(){
	
	struct Rectangle r={10,5};
	printf("from main: length %d, breadth %d", r.length, r.breadth);
	fun(r);
	printf("\nfrom main: length %d, breadth %d", r.length, r.breadth);
	fun2(&r);
	printf("\nfrom main: length %d, breadth %d", r.length, r.breadth);

	// fun3 has created this struct and has returned to main
	struct Rectangle *ptr = fun3();
	printf("\n\nfrom main with struct pointer: length %d, breadth %d", ptr->length, ptr->breadth);

	printf("\n\nfor review, next time, do one with array sent as call by value");

	struct ArrRect t = {{10,20,30,40,50}, 5};
	printf("\n\nContents of Array (called by value) before: ");
	for(int i=0; i<t.num; i++){
		printf("%d ", t.A[i]);
	}
	ArrRectFunc(t, 5);
	printf("\n\nContents of Array (called by value) after: ");
        for(int i=0; i<t.num; i++){
                printf("%d ", t.A[i]);
        }
	// the actual parameters are not modified, only the formal parameters
	
	return 0;
}
