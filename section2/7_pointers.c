#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
	int length;
	int breadth;
};

int main(){

	int a = 10;
	int *p; // declaration and deferencing, is when * is used
	p=&a; // when assigning, don't use *

	printf("%d\n", a);
	printf("using pointer: %d", *p); // dereferencing
	
	printf("\naddress of a : %p %p\n", p, &a);
	// &a and p are the same


	// pointer to an array
	
	int A[5] = {2,4,5,6,7};
	int *p1;
	// p1=A = p1=A[0]
	p1=A;

	for(int i=0; i<5;i++){
		printf("%d\n", A[i]);
		printf("pointer: %d\n", p1[i]); // p1 is a pointer which can act as the name of the array
	}

	int *p3;
	p3=(int *)malloc(5*sizeof(int));
	// C++ syntax: p3=new int[5];

	printf("\n\nThis array is stored on heap: ");
	p3[0] = 10;
	p3[1] = 15;
	p3[2] = 14;
	p3[3] = 21;
	p3[4] = 31;

	// array created in heap

	for(int k=0; k<5; k++){
		printf("\n%d", p3[k]);
	}

	free(p3);
	// C++ syntax: delete [ ] p3;

	// =================================================== //
	//     The size of a pointer                           //
	// =================================================== //

	int *p4;
	char *p5;
	float *p6;
	double *p7;
	struct Rectangle *p8;


	printf("\n\n\n%d\n", sizeof(p4));
	printf("%d\n", sizeof(p5));
	printf("%d\n", sizeof(p6));
	printf("%d\n", sizeof(p7));
	printf("%d\n", sizeof(p8));

	// They are all the same 8 bytes because that is the size of the address

	return 0;
}
