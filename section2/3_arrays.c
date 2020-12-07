#include <stdio.h>
#include <stdlib.h>

int main(){

	int A[5]; //create and array of 5 ints - size is 4bytes * 5  = 20;
	A[0] = 12;
	A[1] = 15;
	A[2] = 25;

	printf("element in index 2 of A: %d\n", A[2]);
	printf("\nsize of array: %d\n", sizeof(A));
	
	int B[5] = {2, 4, 6, 8, 10};
	// same as B[] = {2, 4, 6, 8, 10};
	
	int C[10] = {1,2,3,4,5};
	// the rest of the elements are filled with 0s

	printf("\nElements: ");
	for(int i=0; i<10; i++){
		printf("%d\n", C[i]);
	}

	int a = 0;
	printf("\n\nEnter a size for the array: ");
	scanf("%d", &a);
	printf("\nyou entered: %d", a);

	int D[a];
	D[0] = 23;

	printf("\nContents of D: \n");
	for(int j=0; j<a; j++){
		printf("%d\n", D[j]);
	}

	// Some compiler may not let you initialize with variable, but mine does
	// Arrays cannot be initialized with variables
	
	return 0;
}
