#include <stdio.h>

//defining a constant max tobe the value of 20
#define MAX 20

/* generate a line */

//void function, has no return value
//has input int v
void line(int v)
{
	int x;
	//for loop as long as x is less than v
	for( x=0; x<v; x++ )
	{
		//if x is greater than or equal to 20 then break
		//otherwise pritn -
		if( x >= MAX )
			break;
		putchar('-');
	}
	//end for loop with new line
	putchar('\n');
}
//main
int main()
{
	int value;

	//user input for a positive value less than 20
	printf("Enter a positive value less than %d: ",MAX);
	//scan user value and address it
	scanf("%d",&value);
	//call line function and pass the value
	line(value);
	return(0);
}
