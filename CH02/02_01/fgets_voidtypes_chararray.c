#include <stdio.h>

int main()
{
	//void data ypes used to allocate memory and function definitions
	//C HAS NO STRING DATA TYPE

	//declare an empty character array buffer, storage for up to 32 characters
	char buffer[32];

	printf("Type your name: ");

	//fgets- safely read a line of text from an input stream
	//fgets function reads the characters from standard input and stores up to 32 of these characters in the buffer array
	fgets(buffer,32,stdin);

	//outputs the string input
	printf("Hello, %s",buffer);
	return 0;
}
