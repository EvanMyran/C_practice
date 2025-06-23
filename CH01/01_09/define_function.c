#include <stdio.h>

// define a function charout(a) as the c function putc(a,stdout)
//putc is a function (or macro) used to write a single character to a specified output stream.
//putc takes two arguments: a character (typically an integer representing the character's ASCII value) and a stream pointer. 
// this will output whatever a is
#define charout(a) putc(a,stdout)

int main()
{
	charout('H');
	charout('i');
	charout('!');
	charout('\n');
	return 0;
}
