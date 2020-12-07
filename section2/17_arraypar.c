#include <stdio.h>
#include <stdlib.h>

void * fun1(int size) //use star for return type to support all compilers
{
	int *p;
	p=(int *)malloc(size*sizeof(int));
	for(int i=0; i<size; i++){
		p[i]=i+1;
	}
	return p;
}

// void fun(int *A, int n) is also correct
void fun(int A[], int n){
	//printf("%d", sizeof(A)/sizeof(int)); //will return 2, 8/4
	A[0]= 15; // call by address will modify data
	printf("\nFun print: ");
	for(int i=0;i<5;i++){
		printf("%d ", A[i]);
	}
}

int main(){
	
	int A[]={2,4,6,8,10};
	int n=5;

	printf("Main print: ");
	for(int i=0;i<n;i++){
		printf("%d ", A[i]);
	};

	// C++ for(int x:A) cout>>x>>endl
	fun(A,n);

	int *p1;
	p1 = fun1(20);
	printf("\nDynamicaly created array: ");
	for(int i=0;i<20;i++){
		printf("%d ", p1[i]);
	}

	//printf("\nSize of A: %d", sizeof(A)/sizeof(int)); // returns 5 
	return 0;
}
