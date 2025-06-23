#include <stdio.h>

int main()
{

	//C HAS 4 MAIN DATA TYPES, CHAR, INT, FLOAT, DOUBLE
	char c; //SINGLE CHARACTERS + BYTES
	int i; //INTS OR WHOLE NUMBER  VALUES
	float f; //REAL NUMBERS, SINGLE PRECSION -- decimals, fractions, and very large values -- accurate to 8 digits 
	double d; // REAL NUMBERS, DOUBLE PRECISION -- accurate to 16 digits

	/* input */
	printf("Type a character: ");
	//scanf(%c - holders for the data type, &c - addressing for the variable
	scanf("%c",&c);

	//%d - Standard specifier for reading whole numbers
	printf("Type an integer: ");
	scanf("%d",&i);

	//%f - fixed point, Reads a single-precision floating-point number
	//%e - scientific notation
	printf("Type a small value: ");
	scanf("%f",&f);

	//%lg - double (long float), tells the compiler to print or scan a double value
	printf("Type a huge value: ");
	scanf("%lg",&d);

	/* output */
	printf("\nCharacter: %c\n",c);
	printf("Integer: %d\n",i);
	printf("Single-precision: %f\n",f);
	printf("Double-precision: %lg\n",d);
	return 0;
}
