#include <stdio.h>
#include <stdlib.h>

struct Rectangle //this does not take us space - only defining it
{ // 2 members in here, here are the definitions
	int length;
	int breadth;
	char x; // it allocates 4 bytes but uses only 1 byte :) - called padding

} r3, r4, r5; // can be defined here too
// same as struct Rectange r3, r4, r5 in main

struct Rectangle r2; // can be declared here too but can be accessed by all

int main(){

	//need a variable when declaration
	struct Rectangle r1 = {10, 5}; //local to main function
	printf("\n%d, %d", r1.length, r1.breadth);

	r1.length = 1;
	r1.breadth = 4;
	printf("\n%d, %d", r1.length, r1.breadth);

	printf("\nsize of struct r1: %d", sizeof(r1));

}
