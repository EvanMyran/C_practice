#include <stdio.h>

int main()
{
	//define the variables
	//variables in c must be defined before use
	char c;
	int i;
	float f;

	/* input */
	printf("Type a character: ");
	scanf("%c",&c);
	printf("Type an integer: ");
	scanf("%d",&i);
	printf("Type a small value: ");
	scanf("%f",&f);
	printf("Type a huge value: ");
	double d;
	scanf("%lg",&d);

	/* output */
	printf("\nCharacter: %c\n",c);
	printf("Integer: %d\n",i);
	printf("Single-precision: %f\n",f);
	printf("Double-precision: %lg\n",d);
	return 0;
}
