#include <stdio.h>

int main()
{
	#initialize char string array
	#add a \n to print new line
	char string[] = "Greetings, human!\n";
	int index;

	index = 0;

	#while loop cmparing every index of the string array and checking that it != '\0'
	#It would stop printing if there was a \0
	while( string[index] != '\0' )
	{
		putchar( string[index] );
		index++;
	}

	return(0);
}
