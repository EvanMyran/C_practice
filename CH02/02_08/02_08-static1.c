#include <stdio.h>

//function declaration myname takes no arguments, returns a pointer a character, more commonly, a string in C (since strings are character arrays)
char *myname(void)
{
	//initialize a char array that reads in the string of characters
	char me[] = "Dan Gookin";

	return(me);
}

int main()
{
	printf("This course's author is %s\n", myname() );

	return(0);
}

