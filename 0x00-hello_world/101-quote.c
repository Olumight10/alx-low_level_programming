#include <stdio.h>

#include <unistd.h>

/**
* main - Prints out the last part of a quote in the standard error.
* Description: standard error output
* Return: 1 if success.
*/

int main(void)

{

	write(stderr, "%s", "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	return (1);

}


